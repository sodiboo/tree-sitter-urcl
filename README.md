If you don't know what tree-sitter is or how to use it, here's a quick guide to just setting up this repo so you can use it for highlighting or whatever:

-   install tree-sitter: `npm i -g tree-sitter-cli`
    -   and dependencies for this repo: `npm i`
-   run `tree-sitter generate` to generate the parser

For syntax highlighting, also do this:

-   `tree-sitter init-config` to generate a config file
-   Add the necessary colors from `queries/highlights.scm` to the config
-   Alternatively, copy my config which is meant to resemble vscode's Dark+ theme

```json
{
    "parser-directories": [
        // Don't forget to add the **parent directory** of this repo
        // On my machine, this repo sits in "tree-sitter-urcl" which is in the following directory:
        "C:\\Users\\Terrain\\Documents\\Code\\tree-sitter"
    ],
    "theme": {
        "header": "#C586C0",
        "macro": "#C586C0",
        "instruction": "#569cd6",
        "instruction.unknown": {
            "color": "#569cd6",
            "italic": true
        },
        "label": "#DCDCAA",
        "register": "#9CDCFE",
        "address": "#4FC1FF",
        "port": "#4EC9B0",
        "string": "#ce9178",
        "string.special": "#d7ba7d",
        "number": "#b5cea8",
        "identifier": {
            "color": "#FFFFFF",
            "italic": true
        },
        "identifier.placeholder": {
            "color": "#9CDCFE",
            "italic": true
        }
        // probably shouldn't delete the default entries after this point
    }
}
```

And if you make any changes to `grammar.js`, run `tree-sitter generate` again.

-   `tree-sitter parse file.urcl`: parse and view a syntax tree
-   `tree-sitter highlight file.urcl`: highlights the file in the terminal