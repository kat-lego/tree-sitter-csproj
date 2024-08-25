/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'csproj',

  extras: $ => [
    $.comment,
    /\s/,  // Recognizes whitespace as an "extra"
  ],

  rules: {
    // project rules
    project: $ => seq(
      $.project_open,
      repeat(choice(
        $.property_group,
        $.item_group,
      )),
      $.project_close
    ),
    project_open: $ => seq('<', $.project_tag_name, optional($.non_empty_attributes), '>'),
    project_close: $ => seq('</', $.project_tag_name, '>'),
    project_tag_name: _ => 'Project',

    // property group rules
    property_group: $ => seq(
      $.property_group_open,
      repeat(choice(
        $.generic_element,
        $.target_framework,
      )),
      $.property_group_close,
    ),
    property_group_open: $ => seq('<', $.property_group_tag_name, optional($.non_empty_attributes), '>'),
    property_group_close: $ => seq('</', $.property_group_tag_name, '>'),
    property_group_tag_name: _ => 'PropertyGroup',

    // target framework property rules
    target_framework: $ => seq(
      $.target_framework_open,
      $.text,
      $.target_framework_close,
    ),
    target_framework_open: $ => seq('<', $.target_framework_tag_name, optional($.non_empty_attributes), '>'),
    target_framework_close: $ => seq('</', $.target_framework_tag_name, '>'),
    target_framework_tag_name: _ => 'TargetFramework',

    // item group rules
    item_group: $ => seq(
      $.item_group_open,
      repeat(choice(
        $.generic_element,
        $.package_reference,
        $.project_reference
      )),
      $.item_group_close,
    ),
    item_group_open: $ => seq('<', $.item_group_tag_name, optional($.non_empty_attributes), '>'),
    item_group_close: $ => seq('</', $.item_group_tag_name, '>'),
    item_group_tag_name: _ => 'ItemGroup',

    //package reference
    package_reference: $ => $.package_reference_openclose,
    package_reference_openclose: $ => seq(
      '<',
      $.package_reference_tag_name,
      repeat(choice($.package_reference_include_attribute, $.package_reference_version_attribute)),
      '/>'),
    package_reference_tag_name: _ => 'PackageReference',
    package_reference_version_attribute: $ => seq('Version', '=', $.attribute_value),
    package_reference_include_attribute: $ => seq('Include', '=', $.attribute_value),

    //project reference
    project_reference: $ => $.project_reference_openclose,
    project_reference_openclose: $ => seq(
      '<',
      $.project_reference_tag_name,
      repeat($.project_reference_include_attribute),
      '/>'),
    project_reference_tag_name: _ => 'ProjectReference',
    project_reference_include_attribute: $ => seq('Include', '=', $.attribute_value),

    // attributes
    non_empty_attributes: $ => seq(
      $.attribute,
      repeat(seq(' ', $.attribute))
    ),

    attribute: $ => seq(
      $.attribute_name,
      '=',
      $.attribute_value
    ),

    attribute_name: _ => /[a-zA-Z_][a-zA-Z0-9_-]*/,

    attribute_value: _ => seq(
      '"',
      /[^"]*/,
      '"'
    ),


    // generic element
    generic_element: $ => seq(
      $.tag_open,
      optional($.text),
      $.tag_close,
    ),
    tag_open: $ => seq(
      '<',
      $.tag_name,
      optional($.non_empty_attributes),
      '>'
    ),
    tag_close: $ => seq(
      '</',
      $.tag_name,
      '>'
    ),
    tag_name: _ => /[a-zA-Z]+/,

    text: _ => /[^<]+/,


    comment: _ => token(seq(
      '<!--',
      /[^-]*(-[^-][^-]*)*/,
      '-->'
    )),

  }
});
