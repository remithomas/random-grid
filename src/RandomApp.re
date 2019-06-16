module Style = {
    open Css;

    let app = style([
        display(flexBox),
        flexWrap(wrap),
        width(`percent(100.0)),
    ]);
        
    let gridText = style([
        background(red),
        width(px(500)),
        height(px(400)),
    ]);
}

let n = 500;
let m = n;

[@react.component]
let make = () => {
    <div className="Style.app">
        <h1>{React.string("Random grid : " ++ string_of_int(n) ++ "x" ++ string_of_int(m))}</h1>

        <textarea className="Style.gridText">
            {React.string(Random.Grid.generate(n, m))}
        </textarea>
    </div>
}
