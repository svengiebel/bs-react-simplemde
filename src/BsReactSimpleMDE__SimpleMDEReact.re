[@bs.module]
external seactSimplemdeEditor : ReasonReact.reactClass =
  "react-simplemde-editor";

[@bs.obj]
external makeProps :
  (
    ~id: string=?,
    ~label: string=?,
    ~value: string=?,
    ~onChange: string => unit=?,
    /* TODO create type for options based on: https://github.com/sparksuite/simplemde-markdown-editor#configuration */
    ~options: 'a=?,
    ~events: 'b=?,
    unit
  ) =>
  _ =
  "";

let make =
    (~id=?, ~label=?, ~value=?, ~onChange=?, ~options=?, ~events=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=seactSimplemdeEditor,
    ~props=
      makeProps(~id?, ~label?, ~value?, ~onChange?, ~options?, ~events?, ()),
    children,
  );
