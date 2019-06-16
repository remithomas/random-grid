[@bs.val] external random : unit => float = "Math.random";
[@bs.val] external floor : float => int = "Math.floor";

module Grid {
    let characters = "abcdefghijklmnopqrstuvwxyz";

    let getRandomCharacter = () => {
        let index = floor(random() *. float_of_int(String.length(characters)));
        String.make(1, String.get(characters, index));
    }

    let generate = (n, m) => {
        let str = ref("");

        for (_i in 1 to n) {
            for (_j in 1 to m) {
                str := str^ ++ getRandomCharacter();
            };

            str := str^ ++ "\n";
        };

        str^;
    }
}