/* =================================================================== 
 *
 *  Glint v1.0 Main Stylesheet
 *  11-20-2017
 *  ------------------------------------------------------------------
 *
 *  TOC:
 *  # base style overrides
 *      ## links
 *  # typography & general theme styles
 *      ## Lists
 *      ## responsive video container
 *      ## floated image
 *      ## tables
 *      ## Spacing
 *      ## pace.js styles - minimal
 *  # preloader
 *  # forms
 *      ## style placeholder text
 *      ## change autocomplete styles in chrome
 *  # buttons
 *  # additional components
 *      ## alert box
 *      ## additional typo styles
 *      ## skillbars 
 *  # reusable and common theme styles
 *      ## display headings
 *      ## section header
 *      ## slick slider
 *  # header styles
 *      ## header logo
 *      ## main navigation 
 *      ## mobile menu toggle 
 *  # home 
 *      ## home content
 *      ## home social 
 *      ## home animations
 *  # about
 *      ## about stats
 *  # services
 *      ## services list
 *  # works
 *      ## bricks/masonry
 *  # clients
 *      ## slider
 *      ## testimonials
 *  # contact
 *      ## loader animation
 *  # footer
 *      ## footer main
 *      ## footer bottom
 *      ## go to top
 *
 *
 * =================================================================== */


/* ===================================================================
 * # base style overrides
 *
 * ------------------------------------------------------------------- */
 html {
    font-size: 10px;
}

@media only screen and (max-width: 400px) {
    html {
        font-size: 9.411764705882353px;
    }
}

html, body {
    height: 100%;
}

body {
    background: #111111;
    font-family: "montserrat-medium", serif;
    font-size: 1.7rem;
    font-style: normal;
    font-weight: normal;
    line-height: 1.765;
    color: #757575;
    margin: 0;
    padding: 0;
}


/* ------------------------------------------------------------------- 
 * ## links
 * ------------------------------------------------------------------- */
a {
    color: #0087cc;
    -webkit-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
}

a:hover, a:focus, a:active {
    color: #FFC107;
}

a:hover, a:active {
    outline: 0;
}



/*--------------------------------------------------------------
# Clients
--------------------------------------------------------------*/
.clients {
    padding-top: 5px;
  }
  .clients .swiper-slide img {
    opacity: 0.5;
    transition: 0.3s;
    filter: grayscale(100);
  }
  .clients .swiper-slide img:hover {
    filter: none;
    opacity: 1;
  }
  .clients .swiper-pagination {
    margin-top: 4px;
    position: relative;
  }
  .clients .swiper-pagination .swiper-pagination-bullet {
    width: 8px;
    height: 10px;
    background-color: #fff;
    opacity: 1;
    background-color: #ddd;
  }
  .clients .swiper-pagination .swiper-pagination-bullet-active {
    background-color: #ffc451;
  }


/* ===================================================================
 * # typography & general theme styles
 * 
 * ------------------------------------------------------------------- */
h1, h2, h3, h4, h5, h6, 
.h1, .h2, .h3, .h4, .h5, .h6 {
    font-family: "montserrat-medium", sans-serif;
    color: #000000;
    font-style: normal;
    font-weight: normal;
    text-rendering: optimizeLegibility;
}

h1, .h1, h2, .h2, h3, .h3, h4, .h4 {
    margin-top: 6rem;
    margin-bottom: 1.8rem;
}

@media only screen and (max-width: 600px) {
    h1, .h1, h2, .h2, h3, .h3, h4, .h4 {
        margin-top: 5.1rem;
    }
}

h5, .h5, h6, .h6 {
    margin-top: 4.2rem;
    margin-bottom: 1.5rem;
}

@media only screen and (max-width: 600px) {
    h5, .h5, h6, .h6 {
        margin-top: 3.6rem;
        margin-bottom: 0.9rem;
    }
}

h1, .h1 {
    font-size: 3.6rem;
    line-height: 1.25;
    letter-spacing: -.1rem;
}

@media only screen and (max-width: 600px) {
    h1, .h1 {
        font-size: 3.3rem;
        letter-spacing: -.07rem;
    }
}

h2, .h2 {
    font-size: 3rem;
    line-height: 1.3;
}

h3, .h3 {
    font-size: 2.4rem;
    line-height: 1.25;
}

h4, .h4 {
    font-size: 2.1rem;
    line-height: 1.286;
}

h5, .h5 {
    font-size: 1.6rem;
    line-height: 1.313;
}

h6, .h6 {
    font-size: 1.3rem;
    line-height: 1.385;
    text-transform: uppercase;
    letter-spacing: .16rem;
}

p img {
    margin: 0;
}

p.lead {
    font-family: "montserrat-regular", sans-serif;
    font-size: 2rem;
    font-weight: 300;
    line-height: 1.8;
    margin-bottom: 3.6rem;
    color: #000000;
}

@media only screen and (max-width: 800px) {
    p.lead {
        font-size: 1.8rem;
    }
}

em, i, strong, b {
    font-size: inherit;
    line-height: inherit;
    font-style: normal;
    font-weight: normal;
}

em, i {
    font-family: "lora-italic", serif;
}

strong, b {
    font-family: "lora-bold", serif;
}

small {
    font-size: 1.2rem;
    line-height: inherit;
}

blockquote {
    margin: 3.9rem 0;
    padding-left: 4.5rem;
    position: relative;
}

blockquote:before {
    content: "\201C";
    font-size: 10rem;
    line-height: 0px;
    margin: 0;
    color: rgba(0, 0, 0, 0.25);
    font-family: arial, sans-serif;
    position: absolute;
    top: 3.6rem;
    left: 0;
}

blockquote p {
    font-family: "montserrat-regular", sans-serif;
    padding: 0;
    font-size: 2.1rem;
    line-height: 1.857;
    color: #111111;
}

blockquote cite {
    display: block;
    font-family: "montserrat-regular", sans-serif;
    font-size: 1.4rem;
    font-style: normal;
    line-height: 1.5;
}

blockquote cite:before {
    content: "\2014 \0020";
}

blockquote cite a, blockquote cite a:visited {
    color: #828282;
    border: none;
}

abbr {
    font-family: "lora-bold", serif;
    font-variant: small-caps;
    text-transform: lowercase;
    letter-spacing: .05rem;
    color: #828282;
}

var, kbd, samp, code, pre {
    font-family: Consolas, "Andale Mono", Courier, "Courier New", monospace;
}

pre {
    padding: 2.4rem 3rem 3rem;
    background: #F1F1F1;
    overflow-x: auto;
}

code {
    font-size: 1.4rem;
    margin: 0 .2rem;
    padding: .3rem .6rem;
    white-space: nowrap;
    background: #F1F1F1;
    border: 1px solid #E1E1E1;
    border-radius: 3px;
}

pre > code {
    display: block;
    white-space: pre;
    line-height: 2;
    padding: 0;
    margin: 0;
}

pre.prettyprint > code {
    border: none;
}

del {
    text-decoration: line-through;
}

abbr[title], dfn[title] {
    border-bottom: 1px dotted;
    cursor: help;
    text-decoration: none;
}

mark {
    background: #ffd900;
    color: #000000;
}

hr {
    border: solid rgba(0, 0, 0, 0.1);
    border-width: 1px 0 0;
    clear: both;
    margin: 2.4rem 0 1.5rem;
    height: 0;
}


/* ------------------------------------------------------------------- 
 * ## Lists
 * ------------------------------------------------------------------- */
ol {
    list-style: decimal;
}

ul {
    list-style: disc;
}

li {
    display: list-item;
}

ol, ul {
    margin-left: 1.7rem;
}

ul li {
    padding-left: .4rem;
}

ul ul, ul ol, ol ol, ol ul {
    margin: .6rem 0 .6rem 1.7rem;
}

ul.disc li {
    display: list-item;
    list-style: none;
    padding: 0 0 0 .8rem;
    position: relative;
}

ul.disc li::before {
    content: "";
    display: inline-block;
    width: 8px;
    height: 8px;
    border-radius: 50%;
    background: #FFC107;
    position: absolute;
    left: -17px;
    top: 11px;
    vertical-align: middle;
}

dt {
    margin: 0;
    color: #FFC107;
}

dd {
    margin: 0 0 0 2rem;
}


/* ------------------------------------------------------------------- 
 * ## responsive video container
 * ------------------------------------------------------------------- */
.video-container {
    position: relative;
    padding-bottom: 56.25%;
    height: 0;
    overflow: hidden;
}

.video-container iframe,
.video-container object,
.video-container embed,
.video-container video {
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
}


/* ------------------------------------------------------------------- 
 * ## floated image
 * ------------------------------------------------------------------- */
img.pull-right {
    margin: 1.5rem 0 0 3rem;
}

img.pull-left {
    margin: 1.5rem 3rem 0 0;
}


/* ------------------------------------------------------------------- 
 * ## tables
 * ------------------------------------------------------------------- */
table {
    border-width: 0;
    width: 100%;
    max-width: 100%;
    font-family: "lora-regular", serif;
}

th, td {
    padding: 1.5rem 3rem;
    text-align: left;
    border-bottom: 1px solid #E8E8E8;
}

th {
    color: #000000;
    font-family: "montserrat-bold", sans-serif;
}

td {
    line-height: 1.5;
}

th:first-child, td:first-child {
    padding-left: 0;
}

th:last-child, td:last-child {
    padding-right: 0;
}

.table-responsive {
    overflow-x: auto;
    -webkit-overflow-scrolling: touch;
}


/* ------------------------------------------------------------------- 
 * ## Spacing 
 * ------------------------------------------------------------------- */
button, .btn {
    margin-bottom: 1.2rem;
}

fieldset {
    margin-bottom: 1.5rem;
}

input,
textarea,
select,
pre,
blockquote,
figure,
table,
p,
ul,
ol,
dl,
form,
.video-container,
.cl-custom-select {
    margin-bottom: 3rem;
}


/* ------------------------------------------------------------------- 
 * ## pace.js styles - minimal
 * ------------------------------------------------------------------- */
.pace {
    -webkit-pointer-events: none;
    pointer-events: none;
    -webkit-user-select: none;
    -moz-user-select: none;
    user-select: none;
}

.pace-inactive {
    display: none;
}

.pace .pace-progress {
    background: #FFC107;
    position: fixed;
    z-index: 900;
    top: 0;
    right: 100%;
    width: 100%;
    height: 4px;
}

.oldie .pace {
    display: none;
}



/* ===================================================================
 * # preloader
 *
 * ------------------------------------------------------------------- */
#preloader {
    position: fixed;
    top: 0;
    left: 0;
    right: 0;
    bottom: 0;
    background: #050505;
    z-index: 800;
    height: 100%;
    width: 100%;
    display: table;
}

.no-js #preloader, .oldie #preloader {
    display: none;
}

#loader {
    display: table-cell;
    text-align: center;
    vertical-align: middle;
}

.line-scale-pulse-out > div {
    background-color: #FFC107;
    width: 4px;
    height: 35px;
    border-radius: 2px;
    margin: 2px;
    -webkit-animation-fill-mode: both;
    animation-fill-mode: both;
    display: inline-block;
    -webkit-animation: line-scale-pulse-out 0.9s -0.6s infinite cubic-bezier(0.85, 0.25, 0.37, 0.85);
    animation: line-scale-pulse-out 0.9s -0.6s infinite cubic-bezier(0.85, 0.25, 0.37, 0.85);
}

.line-scale-pulse-out > div:nth-child(2), .line-scale-pulse-out > div:nth-child(4) {
    -webkit-animation-delay: -0.4s !important;
    animation-delay: -0.4s !important;
}

.line-scale-pulse-out > div:nth-child(1), .line-scale-pulse-out > div:nth-child(5) {
    -webkit-animation-delay: -0.2s !important;
    animation-delay: -0.2s !important;
}

@-webkit-keyframes line-scale-pulse-out {
    0% {
        -webkit-transform: scaley(1);
        transform: scaley(1);
    }
    50% {
        -webkit-transform: scaley(0.4);
        transform: scaley(0.4);
    }
    100% {
        -webkit-transform: scaley(1);
        transform: scaley(1);
    }
}

@keyframes line-scale-pulse-out {
    0% {
        -webkit-transform: scaley(1);
        transform: scaley(1);
    }
    50% {
        -webkit-transform: scaley(0.4);
        transform: scaley(0.4);
    }
    100% {
        -webkit-transform: scaley(1);
        transform: scaley(1);
    }
}



/* ===================================================================
 * # forms
 *
 * ------------------------------------------------------------------- */
fieldset {
    border: none;
}

input[type="email"],
input[type="number"],
input[type="search"],
input[type="text"],
input[type="tel"],
input[type="url"],
input[type="password"],
textarea,
select {
    display: block;
    height: 6rem;
    padding: 1.5rem 0;
    border: 0;
    outline: none;
    color: #333333;
    font-family: "montserrat-light", sans-serif;
    font-size: 1.4rem;
    line-height: 3rem;
    max-width: 100%;
    background: transparent;
    border-bottom: 2px solid rgba(0, 0, 0, 0.15);
    -webkit-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
}

.cl-custom-select {
    position: relative;
    padding: 0;
}

.cl-custom-select select {
    -webkit-appearance: none;
    -moz-appearance: none;
    -ms-appearance: none;
    -o-appearance: none;
    appearance: none;
    text-indent: 0.01px;
    text-overflow: '';
    margin: 0;
    line-height: 3rem;
    vertical-align: middle;
}

.cl-custom-select select option {
    padding-left: 2rem;
    padding-right: 2rem;
}

.cl-custom-select select::-ms-expand {
    display: none;
}

.cl-custom-select::after {
    border-bottom: 2px solid rgba(0, 0, 0, 0.5);
    border-right: 2px solid rgba(0, 0, 0, 0.5);
    content: '';
    display: block;
    height: 8px;
    width: 8px;
    margin-top: -7px;
    pointer-events: none;
    position: absolute;
    right: 2.4rem;
    top: 50%;
    -webkit-transform-origin: 66% 66%;
    -ms-transform-origin: 66% 66%;
    transform-origin: 66% 66%;
    -webkit-transform: rotate(45deg);
    -ms-transform: rotate(45deg);
    transform: rotate(45deg);
    -webkit-transition: all 0.15s ease-in-out;
    transition: all 0.15s ease-in-out;
}


/* IE9 and below */

.oldie .cl-custom-select::after {
    display: none;
}

textarea {
    min-height: 25rem;
}

input[type="email"]:focus,
input[type="number"]:focus,
input[type="search"]:focus,
input[type="text"]:focus,
input[type="tel"]:focus,
input[type="url"]:focus,
input[type="password"]:focus,
textarea:focus,
select:focus {
    color: #000000;
    border-bottom: 2px solid black;
}

label, legend {
    font-family: "montserrat-regular", sans-serif;
    font-size: 1.4rem;
    font-weight: bold;
    margin-bottom: .9rem;
    line-height: 1.714;
    color: #000000;
    display: block;
}

input[type="checkbox"], input[type="radio"] {
    display: inline;
}

label > .label-text {
    display: inline-block;
    margin-left: 1rem;
    font-family: "montserrat-regular", sans-serif;
    font-weight: normal;
    line-height: inherit;
}

label > input[type="checkbox"], 
label > input[type="radio"] {
    margin: 0;
    position: relative;
    top: .15rem;
}


/* ------------------------------------------------------------------- 
 * ## style placeholder text
 * ------------------------------------------------------------------- */
::-webkit-input-placeholder {
    color: #828282;
}

:-moz-placeholder {
    color: #828282;
    /* Firefox 18- */
}

::-moz-placeholder {
    color: #828282;
    /* Firefox 19+ */
}

:-ms-input-placeholder {
    color: #828282;
}

.placeholder {
    color: #828282 !important;
}


/* ------------------------------------------------------------------- 
 * ## change autocomplete styles in chrome
 * ------------------------------------------------------------------- */
input:-webkit-autofill,
input:-webkit-autofill:hover,
input:-webkit-autofill:focus input:-webkit-autofill,
textarea:-webkit-autofill,
textarea:-webkit-autofill:hover textarea:-webkit-autofill:focus,
select:-webkit-autofill,
select:-webkit-autofill:hover,
select:-webkit-autofill:focus {
    -webkit-text-fill-color: #FFC107;
    transition: background-color 5000s ease-in-out 0s;
}



/* ===================================================================
 * # buttons
 *
 * ------------------------------------------------------------------- */
.btn,
button,
input[type="submit"],
input[type="reset"],
input[type="button"] {
    display: inline-block;
    font-family: "montserrat-medium", sans-serif;
    font-size: 1.2rem;
    text-transform: uppercase;
    letter-spacing: .3rem;
    height: 5.4rem;
    line-height: calc(5.4rem - .4rem);
    padding: 0 3rem;
    margin: 0 .3rem 1.2rem 0;
    color: #000000;
    text-decoration: none;
    text-align: center;
    white-space: nowrap;
    cursor: pointer;
    -webkit-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    background-color: #c5c5c5;
    border: .2rem solid #c5c5c5;
}

.btn:hover,
button:hover,
input[type="submit"]:hover,
input[type="reset"]:hover,
input[type="button"]:hover,
.btn:focus,
button:focus,
input[type="submit"]:focus,
input[type="reset"]:focus,
input[type="button"]:focus {
    background-color: #b8b8b8;
    border-color: #b8b8b8;
    color: #000000;
    outline: 0;
}


/* button primary
 * ------------------------------------------------- */

.btn.btn--primary,
button.btn--primary,
input[type="submit"].btn--primary,
input[type="reset"].btn--primary,
input[type="button"].btn--primary {
    background: #FFC107;
    border-color: #FFC107;
    color: #FFFFFF;
}

.btn.btn--primary:hover,
button.btn--primary:hover,
input[type="submit"].btn--primary:hover,
input[type="reset"].btn--primary:hover,
input[type="button"].btn--primary:hover,
.btn.btn--primary:focus,
button.btn--primary:focus,
input[type="submit"].btn--primary:focus,
input[type="reset"].btn--primary:focus,
input[type="button"].btn--primary:focus {
    background: #0C0484;
    border-color: #0C0484;
}


/* button modifiers
 * ------------------------------------------------- */

.btn.full-width, button.full-width {
    width: 100%;
    margin-right: 0;
}

.btn--medium, button.btn--medium {
    height: 5.7rem !important;
    line-height: calc(5.7rem - .4rem) !important;
}

.btn--large, button.btn--large {
    height: 6rem !important;
    line-height: calc(6rem - .4rem) !important;
}

.btn--stroke, button.btn--stroke {
    background: transparent !important;
    border: 0.2rem solid #FFC107;
    color: #FFC107;
}

.btn--stroke:hover, button.btn--stroke:hover {
    border: 0.2rem solid #000000;
    color: #000000;
}

.btn--pill, button.btn--pill {
    padding-left: 3rem !important;
    padding-right: 3rem !important;
    border-radius: 1000px !important;
}

button::-moz-focus-inner, input::-moz-focus-inner {
    border: 0;
    padding: 0;
}


/* =================================================================== 
 * # additional components
 *
 * ------------------------------------------------------------------- */


/* ------------------------------------------------------------------- 
 * ## alert box
 * ------------------------------------------------------------------- */
.alert-box {
    padding: 2.1rem 4rem 2.1rem 3rem;
    position: relative;
    margin-bottom: 3rem;
    border-radius: 3px;
    font-family: "montserrat-regular", sans-serif;
    font-size: 1.5rem;
    line-height: 1.6;
}

.alert-box__close {
    position: absolute;
    right: 1.8rem;
    top: 1.8rem;
    cursor: pointer;
}

.alert-box__close.fa {
    font-size: 12px;
}

.alert-box--error {
    background-color: #ffd1d2;
    color: #e65153;
}

.alert-box--success {
    background-color: #c8e675;
    color: #758c36;
}

.alert-box--info {
    background-color: #d7ecfb;
    color: #4a95cc;
}

.alert-box--notice {
    background-color: #fff099;
    color: #bba31b;
}


/* ------------------------------------------------------------------- 
 * ## additional typo styles 
 * ------------------------------------------------------------------- */


/* drop cap 
 * ----------------------------------------------- */
.drop-cap:first-letter {
    float: left;
    margin: 0;
    padding: 1.5rem .6rem 0 0;
    font-size: 8.4rem;
    font-family: "montserrat-regular", sans-serif;
    font-weight: bold;
    line-height: 6rem;
    text-indent: 0;
    background: transparent;
    color: #000000;
}


/* line definition style 
 * ----------------------------------------------- */
.lining dt, .lining dd {
    display: inline;
    margin: 0;
}

.lining dt + dt:before, .lining dd + dt:before {
    content: "\A";
    white-space: pre;
}

.lining dd + dd:before {
    content: ", ";
}

.lining dd + dd:before {
    content: ", ";
}

.lining dd:before {
    content: ": ";
    margin-left: -0.2em;
}


/* dictionary definition style 
 * ----------------------------------------------- */
.dictionary-style dt {
    display: inline;
    counter-reset: definitions;
}

.dictionary-style dt + dt:before {
    content: ", ";
    margin-left: -0.2em;
}

.dictionary-style dd {
    display: block;
    counter-increment: definitions;
}

.dictionary-style dd:before {
    content: counter(definitions, decimal) ". ";
}


/** 
 * Pull Quotes
 * -----------
 * markup:
 *
 * <aside class="pull-quote">
 *		<blockquote>
 *			<p></p>
 *		</blockquote>
 *	</aside>
 *
 * --------------------------------------------------------------------- */

.pull-quote {
    position: relative;
    padding: 2.1rem 3rem 2.1rem 0px;
}

.pull-quote:before, .pull-quote:after {
    height: 1em;
    position: absolute;
    font-size: 10rem;
    font-family: Arial, Sans-Serif;
    color: rgba(0, 0, 0, 0.25);
}

.pull-quote:before {
    content: "\201C";
    top: -3.6rem;
    left: 0;
}

.pull-quote:after {
    content: '\201D';
    bottom: 3.6rem;
    right: 0;
}

.pull-quote blockquote {
    margin: 0;
}

.pull-quote blockquote:before {
    content: none;
}


/** 
 * Stats Tab
 * ---------
 * markup:
 *
 * <ul class="stats-tabs">
 *		<li><a href="#">[value]<em>[name]</em></a></li>
 *	</ul>
 *
 * Extend this object into your markup.
 *
 * --------------------------------------------------------------------- */

.stats-tabs {
    padding: 0;
    margin: 3rem 0;
}

.stats-tabs li {
    display: inline-block;
    margin: 0 1.5rem 3rem 0;
    padding: 0 1.5rem 0 0;
    border-right: 1px solid rgba(0, 0, 0, 0.1);
}

.stats-tabs li:last-child {
    margin: 0;
    padding: 0;
    border: none;
}

.stats-tabs li a {
    display: inline-block;
    font-size: 2.5rem;
    font-family: "montserrat-regular", sans-serif;
    font-weight: bold;
    border: none;
    color: #000000;
}

.stats-tabs li a:hover {
    color: #FFC107;
}

.stats-tabs li a em {
    display: block;
    margin: .6rem 0 0 0;
    font-size: 1.4rem;
    font-family: "montserrat-regular", sans-serif;
    color: #828282;
}


/* ------------------------------------------------------------------- 
 * ## skillbars 
 * ------------------------------------------------------------------- */
.skill-bars {
    list-style: none;
    margin: 6rem 0 3rem;
}

.skill-bars li {
    height: .6rem;
    background: #c9c9c9;
    width: 100%;
    margin-bottom: 6.9rem;
    padding: 0;
    position: relative;
}

.skill-bars li strong {
    position: absolute;
    left: 0;
    top: -3rem;
    font-family: "montserrat-bold", sans-serif;
    color: #000000;
    text-transform: uppercase;
    letter-spacing: .2rem;
    font-size: 1.4rem;
    line-height: 2.4rem;
}

.skill-bars li .progress {
    background: #000000;
    position: relative;
    height: 100%;
}

.skill-bars li .progress span {
    position: absolute;
    right: 0;
    top: -3.6rem;
    display: block;
    font-family: "montserrat-regular", sans-serif;
    color: #FFFFFF;
    font-size: 1.1rem;
    line-height: 1;
    background: #000000;
    padding: .6rem .6rem;
    border-radius: 3px;
}

.skill-bars li .progress span::after {
    position: absolute;
    left: 50%;
    bottom: -5px;
    margin-left: -5px;
    border-right: 5px solid transparent;
    border-left: 5px solid transparent;
    border-top: 5px solid #000000;
    content: "";
}

.skill-bars li .percent5  { width: 5%; }
.skill-bars li .percent10 { width: 10%; }
.skill-bars li .percent15 { width: 15%; }
.skill-bars li .percent20 { width: 20%; }
.skill-bars li .percent25 { width: 25%; }
.skill-bars li .percent30 { width: 30%; }
.skill-bars li .percent35 { width: 35%; }
.skill-bars li .percent40 { width: 40%; }
.skill-bars li .percent45 { width: 45%; }
.skill-bars li .percent50 { width: 50%; }
.skill-bars li .percent55 { width: 55%; }
.skill-bars li .percent60 { width: 60%; }
.skill-bars li .percent65 { width: 65%; }
.skill-bars li .percent70 { width: 70%; }
.skill-bars li .percent75 { width: 75%; }
.skill-bars li .percent80 { width: 80%; }
.skill-bars li .percent85 { width: 85%; }
.skill-bars li .percent90 { width: 90%; }
.skill-bars li .percent95 { width: 95%; }
.skill-bars li .percent100 { width: 100%; }


/*--------------------------------------------------------------
# Pricing
--------------------------------------------------------------*/
.pricing .box {
    padding: 20px;
    background: #f9f9f9;
    text-align: center;
    border-radius: 8px;
    position: relative;
    overflow: hidden;
  }
  .pricing .box h3 {
    font-weight: 400;
    padding: 15px;
    font-size: 18px;
    text-transform: uppercase;
    font-weight: 600;
    color: #191919;
  }
  .pricing .box h4 {
    font-size: 42px;
    color: #0c0484;
    font-weight: 500;
    font-family: "Open Sans", sans-serif;
    margin-bottom: 20px;
  }
  .pricing .box h4 sup {
    font-size: 20px;
    top: -15px;
    left: -3px;
  }
  .pricing .box h4 span {
    color: #bababa;
    font-size: 16px;
    font-weight: 300;
  }
  .pricing .box ul {
    padding: 0;
    list-style: none;
    color: #191919;
    text-align: center;
    line-height: 20px;
    font-size: 14px;
  }
  .pricing .box ul li {
    padding-bottom: 16px;
  }
  .pricing .box ul i {
    color: #0c0484;
    font-size: 18px;
    padding-right: 4px;
  }
  .pricing .box ul .na {
    color: #ccc;
    text-decoration: line-through;
  }
  .pricing .box .btn-wrap {
    padding: 15px;
    text-align: center;
  }
  .pricing .box .btn-buy {
    background: #0c0484;
    display: inline-block;
    padding: 10px 40px;
    color: #fff;
    transition: none;
    font-size: 14px;
    font-weight: 400;
    font-family: "Raleway", sans-serif;
    font-weight: 600;
    transition: 0.3s;
  }
  .pricing .box .btn-buy:hover {
    background: #e82d2d;
  }
  .pricing .featured {
    background: #0c0484;
    box-shadow: none;
    color: #fff;
  }
  .pricing .featured h3, .pricing .featured h4, .pricing .featured ul, .pricing .featured ul li, .pricing .featured ul .na {
    color: #fff;
  }
  .pricing .featured h4 span {
    color: rgba(255, 255, 255, 0.58);
  }
  .pricing .featured .btn-wrap {
    padding: 15px;
    text-align: center;
  }
  .pricing .featured .btn-buy {
    background: rgba(255, 255, 255, 0.2);
  }
  .pricing .featured .btn-buy:hover {
    background: #fff;
    color: #0c0484;
  }
  

/* ===================================================================
 * # reusable and common theme styles
 *
 * ------------------------------------------------------------------- */
.wide {
    max-width: 1400px;
}

.narrow {
    max-width: 800px;
}


/* ------------------------------------------------------------------- 
 * ## display headings
 * ------------------------------------------------------------------- */
.display-1 {
    font-family: "montserrat-medium", sans-serif;
    font-size: 7.8rem;
    line-height: 1.25;
    color: #000000;
    margin-top: 0;
}

.display-1--light {
    color: #FFFFFF;
}

.display-2 {
    font-family: "montserrat-medium", sans-serif;
    font-size: 5.2rem;
    line-height: 1.255;
    color: #000000;
    margin-top: 0;
}

.display-2--light {
    color: #FFFFFF;
}

.subhead + .display-2 {
    margin-top: .6rem;
}

.subhead {
    font-family: "montserrat-bold", sans-serif;
    font-size: 2.7rem;
    line-height: 1.333;
    text-transform: uppercase;
    letter-spacing: .25rem;
    color: #FFC107;
    margin-top: 0;
    margin-bottom: 0;
}

.subheadfooter {
    font-family: "montserrat-bold", sans-serif;
    font-size: 1.7rem;
    line-height: 1.333;
    text-transform: uppercase;
    letter-spacing: .25rem;
    color: #FFC107;
    margin-top: 0;
    margin-left: 25px;
    margin-bottom: 0;
}

.subhead--dark {
    color: #000000;
}


/* ------------------------------------------------------------------- 
 * responsive:
 * display headings
 * ------------------------------------------------------------------- */
@media only screen and (max-width: 1200px) {
    .display-1 {
        font-size: 7.2rem;
    }
    .display-2 {
        font-size: 4.4rem;
    }
}

@media only screen and (max-width: 800px) {
    .display-1 {
        font-size: 6.5rem;
    }
    .display-2 {
        font-size: 4rem;
    }
}

@media only screen and (max-width: 600px) {
    .display-1 {
        font-size: 5rem;
    }
    .display-2 {
        font-size: 3.3rem;
    }
    .subhead {
        font-size: 1.5rem;
    }
}

@media only screen and (max-width: 400px) {
    .display-1 {
        font-size: 4.2rem;
    }
    .display-2 {
        font-size: 3rem;
    }
}



.ftco-footer {
    font-size: 16px;
    background: #000;
    padding: 7em 0;
    z-index: 0; }
    .ftco-footer .ftco-footer-logo {
      text-transform: uppercase;
      letter-spacing: .1em; }
    .ftco-footer .ftco-footer-widget h2 {
      font-weight: normal;
      color: #fff;
      margin-bottom: 40px;
      font-size: 13px;
      font-weight: 900;
      text-transform: uppercase;
      font-family: "Poppins", Arial, sans-serif;
      letter-spacing: 3px; }
    .ftco-footer .ftco-footer-widget ul li a {
      color: rgba(255, 255, 255, 0.9); }
      .ftco-footer .ftco-footer-widget ul li a span {
        color: #fff; }
    .ftco-footer .ftco-footer-widget .btn-primary {
      background: #fff !important;
      border: 2px solid #fff !important; }
      .ftco-footer .ftco-footer-widget .btn-primary:hover {
        background: #fff;
        border: 2px solid #fff !important; }
    .ftco-footer p {
      color: rgba(255, 255, 255, 0.7); }
    .ftco-footer a {
      color: rgba(255, 255, 255, 0.7); }
      .ftco-footer a:hover {
        color: #fff; }
    .ftco-footer .ftco-heading-2 {
      font-size: 17px;
      font-weight: 400;
      color: #000000; }
  
  .ftco-footer-social li {
    list-style: none;
    margin: 0 10px 0 0;
    display: inline-block; }
    .ftco-footer-social li a {
      height: 50px;
      width: 50px;
      display: block;
      float: left;
      background: rgba(255, 255, 255, 0.05);
      border-radius: 50%;
      position: relative; }
      .ftco-footer-social li a span {
        position: absolute;
        font-size: 26px;
        top: 50%;
        left: 50%;
        -webkit-transform: translate(-50%, -50%);
        -ms-transform: translate(-50%, -50%);
        transform: translate(-50%, -50%); }
      .ftco-footer-social li a:hover {
        color: #fff; }
  
  .footer-small-nav > li {
    display: inline-block; }
    .footer-small-nav > li a {
      margin: 0 10px 10px 0; }
      .footer-small-nav > li a:hover, .footer-small-nav > li a:focus {
        color: #fdcb6e; }

        
/* ------------------------------------------------------------------- 
 * ## section header
 * ------------------------------------------------------------------- */
.section-header {
    text-align: center;
    position: relative;
    margin-bottom: 0.6rem;
    max-width: 960px;
}

.section-header.has-bottom-sep {
    padding-bottom: 2.1rem;
    position: relative;
}

.section-header.has-bottom-sep::before {
    content: "";
    display: inline-block;
    height: 1px;
    width: 550px;
    background-color: rgba(0, 0, 0, 0.1);
    position: absolute;
    bottom: 0;
    left: 50%;
    -webkit-transform: translateX(-50%);
    -ms-transform: translateX(-50%);
    transform: translateX(-50%);
}

.section-header.has-bottom-sep.light-sep::before {
    background-color: rgba(255, 255, 255, 0.05);
}


/* ------------------------------------------------------------------- 
 * responsive:
 * section-header
 * ------------------------------------------------------------------- */
@media only screen and (max-width: 1200px) {
    .section-header {
        max-width: 800px;
    }
}

@media only screen and (max-width: 900px) {
    .section-header {
        max-width: 700px;
    }
}

@media only screen and (max-width: 400px) {
    .s-clients {
        padding-bottom: 17.4rem;
    }
    .section-header.has-bottom-sep::before {
        width: 400px;
    }
}

@media only screen and (max-width: 600px) {
    .section-header.has-bottom-sep {
        padding-bottom: 0;
    }
    .section-header.has-bottom-sep::before {
        width: 250px;
    }
}


/* ------------------------------------------------------------------- 
 * ## slick slider 
 * ------------------------------------------------------------------- */
.slick-slider .slick-slide {
    outline: none;
}

.slick-slider .slick-dots {
    display: block;
    list-style: none;
    width: 100%;
    padding: 0;
    margin: 3rem 0 0 0;
    text-align: center;
    position: absolute;
    top: 70%;
    left: 0;
}

.slick-slider .slick-dots li {
    display: inline-block;
    width: 27px;
    height: 27px;
    margin: 0;
    padding: 9px;
    cursor: pointer;
}

.slick-slider .slick-dots li button {
    display: block;
    width: 10px;
    height: 10px;
    border-radius: 50%;
    background: #959595;
    border: none;
    line-height: 10px;
    padding: 0;
    margin: 0;
    cursor: pointer;
    font: 0/0 a;
    text-shadow: none;
    color: transparent;
}

.slick-slider .slick-dots li button:hover,
.slick-slider .slick-dots li button:focus {
    outline: none;
}

.slick-slider .slick-dots li.slick-active button,
.slick-slider .slick-dots li:hover button {
    background: #FFC107;
}



/* ===================================================================
 * # header styles
 *
 * ------------------------------------------------------------------- */
.s-header {
    width: 100%;
    height: 96px;
    background-color: transparent;
    position: absolute;
    top: 0;
    z-index: 500;
}


/* -------------------------------------------------------------------
 * ## header logo
 * ------------------------------------------------------------------- */
.header-logo {
    display: inline-block;
    position: absolute;
    margin: 0;
    padding: 0;
    left: 40px;
    top: 50%;
    -webkit-transform: translateY(-50%);
    -ms-transform: translateY(-50%);
    transform: translateY(-50%);
    z-index: 701;
}

.header-logo a {
    display: block;
    margin: 9px 0 0 0;
    padding: 0;
    outline: 0;
    border: none;
    width: 140px;
    -webkit-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
}




/* -------------------------------------------------------------------
 * ## footer logo
 * ------------------------------------------------------------------- */
 .footer-logo {
    display: inline-block;
    position: absolute;
    margin: 0;
    padding: 0;
    left: 100px;
    top: 0%;
    -webkit-transform: translateY(-50%);
    -ms-transform: translateY(-50%);
    transform: translateY(-50%);
    z-index: 201;
}

.footer-logo a {
    display: block;
    margin: 9px 0 0 0;
    padding: 0;
    outline: 0;
    border: none;
    width: 140px;
    -webkit-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
}


/* ------------------------------------------------------------------- 
 * ## main navigation 
 * ------------------------------------------------------------------- */
.header-nav {
    background: #0C0C0C;
    color: rgba(255, 255, 255, 0.25);
    font-family: "montserrat-light", sans-serif;
    font-size: 1.3rem;
    line-height: 1.846;
    padding: 3.6rem 3rem 3.6rem 3.6rem;
    height: 100%;
    width: 280px;
    position: fixed;
    right: 0;
    top: 0;
    z-index: 700;
    overflow-y: auto;
    overflow-x: hidden;
    -webkit-transition: all 0.5s ease;
    transition: all 0.5s ease;
    -webkit-transform: translateZ(0);
    -webkit-backface-visibility: hidden;
    -webkit-transform: translateX(100%);
    -ms-transform: translateX(100%);
    transform: translateX(100%);
    visibility: hidden;
}

.header-nav a, .header-nav a:visited {
    color: rgba(255, 255, 255, 0.5);
}

.header-nav a:hover,
.header-nav a:focus,
.header-nav a:active {
    color: white;
}

.header-nav h3 {
    font-family: "montserrat-semibold", sans-serif;
    font-size: 11px;
    line-height: 1.5;
    text-transform: uppercase;
    letter-spacing: .25rem;
    margin-bottom: 4.8rem;
    margin-top: .9rem;
    color: #FFC107;
}

.header-nav p {
    margin-bottom: 2.7rem;
}

.header-nav__content {
    position: relative;
    left: 50px;
    opacity: 0;
    visibility: hidden;
}

.header-nav__list {
    font-family: "montserrat-regular", sans-serif;
    font-size: 1.8rem;
    margin: 3.6rem 0 3rem 0;
    padding: 0 0 1.8rem 0;
    list-style: none;
}

.header-nav__list li {
    padding-left: 0;
    line-height: 4.5rem;
}

.header-nav__list a,
.header-nav__list a:visited {
    color: #FFFFFF;
}

.header-nav__social {
    list-style: none;
    display: inline-block;
    margin: 0;
    font-size: 1.8rem;
}

.header-nav__social li {
    margin-right: 12px;
    padding-left: 0;
    display: inline-block;
}

.header-nav__social li a {
    color: rgba(255, 255, 255, 0.15);
}

.header-nav__social li a:hover,
.header-nav__social li a:focus {
    color: white;
}

.header-nav__social li:last-child {
    margin: 0;
}

.header-nav__close {
    display: block;
    height: 30px;
    width: 30px;
    border-radius: 3px;
    background-color: rgba(0, 0, 0, 0.3);
    position: absolute;
    top: 36px;
    right: 30px;
    font: 0/0 a;
    text-shadow: none;
    color: transparent;
    z-index: 800;
}

.header-nav__close span::before, 
.header-nav__close span::after {
    content: "";
    display: block;
    height: 2px;
    width: 12px;
    background-color: #FFFFFF;
    position: absolute;
    top: 50%;
    left: 9px;
    margin-top: -1px;
}

.header-nav__close span::before {
    -webkit-transform: rotate(-45deg);
    -ms-transform: rotate(-45deg);
    transform: rotate(-45deg);
}

.header-nav__close span::after {
    -webkit-transform: rotate(45deg);
    -ms-transform: rotate(45deg);
    transform: rotate(45deg);
}


/* menu is open
 * ----------------------------------------------- */
.menu-is-open .header-nav {
    -webkit-transform: translateX(0);
    -ms-transform: translateX(0);
    transform: translateX(0);
    visibility: visible;
    -webkit-overflow-scrolling: touch;
}

.menu-is-open .header-nav .header-nav__content {
    opacity: 1;
    visibility: visible;
    -webkit-transition-property: all;
    transition-property: all;
    -webkit-transition-duration: 0.5s;
    transition-duration: 0.5s;
    -webkit-transition-timing-function: ease-in-out;
    transition-timing-function: ease-in-out;
    -webkit-transition-delay: 0.3s;
    transition-delay: 0.3s;
    left: 0;
}


/* ------------------------------------------------------------------- 
 * ## mobile menu toggle 
 * ------------------------------------------------------------------- */
.header-menu-toggle {
    position: fixed;
    right: 38px;
    top: 24px;
    height: 42px;
    width: 42px;
    line-height: 42px;
    font-family: "montserrat-medium", sans-serif;
    font-size: 1.3rem;
    text-transform: uppercase;
    letter-spacing: .3rem;
    color: #FFC107;
    -webkit-transition: all 0.5s ease-in-out;
    transition: all 0.5s ease-in-out;
}

.header-menu-toggle.opaque {
    background-color: #000000;
}

.header-menu-toggle.opaque .header-menu-text {
    background-color: #000000;
}

.header-menu-toggle:hover, .header-menu-toggle:focus {
    color: #FFFFFF;
}

.header-menu-text {
    display: block;
    position: absolute;
    top: 0;
    left: -70px;
    width: 70px;
    padding-left: 12px;
}

.header-menu-icon {
    display: block;
    width: 22px;
    height: 2px;
    margin-top: -1px;
    position: absolute;
    left: 10px;
    top: 50%;
    right: auto;
    bottom: auto;
    background-color: white;
    -webkit-transition: all 0.5s ease-in-out;
    transition: all 0.5s ease-in-out;
}

.header-menu-icon::before, .header-menu-icon::after {
    content: '';
    width: 100%;
    height: 100%;
    background-color: inherit;
    position: absolute;
    left: 0;
    -webkit-transition: all 0.5s ease-in-out;
    transition: all 0.5s ease-in-out;
}

.header-menu-icon::before {
    top: -9px;
}

.header-menu-icon::after {
    bottom: -9px;
}


/* ------------------------------------------------------------------- 
 * responsive:
 * header
 * ------------------------------------------------------------------- */
@media only screen and (max-width: 600px) {
    .s-header {
        height: 90px;
    }
    .header-logo {
        left: 30px;
    }
    .header-menu-toggle {
        right: 25px;
    }
}

@media only screen and (max-width: 400px) {
    .header-menu-text {
        display: none;
    }
}



/* ===================================================================
 * # home 
 *
 * ------------------------------------------------------------------- */
.s-home {
    width: 100%;
    height: 100%;
    min-height: 786px;
    background-color: transparent;
    position: relative;
    display: table;
}

.s-home .shadow-overlay {
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    opacity: .4;
    background: -moz-linear-gradient(top, transparent 0%, rgba(0, 0, 0, 0.8) 100%);
    background: -webkit-linear-gradient(top, transparent 0%, rgba(0, 0, 0, 0.8) 100%);
    background: linear-gradient(to bottom, transparent 0%, rgba(0, 0, 0, 0.8) 100%);
    filter: progid: DXImageTransform.Microsoft.gradient( startColorstr='#00000000', endColorstr='#cc000000', GradientType=0);
}

.s-home .overlay {
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    opacity: .6;
    background-color: #000000;
}

.no-js .s-home {
    background: #000000;
}


/* ------------------------------------------------------------------- 
 * ## home content
 * ------------------------------------------------------------------- */
.home-content {
    display: table-cell;
    width: 100%;
    height: 100%;
    vertical-align: middle;
    padding-bottom: 15.6rem;
    position: relative;
    overflow: hidden;
}

.home-content h3 {
    font-family: "montserrat-medium", sans-serif;
    font-size: 1.6rem;
    color: rgba(255, 255, 255, 0.5);
    text-transform: uppercase;
    letter-spacing: .3rem;
    position: relative;
    margin-top: 0;
    margin-bottom: 1.2rem;
    margin-left: 6px;
}

.home-content h1 {
    font-family: "montserrat-medium", sans-serif;
    font-size: 6.3rem;
    line-height: 1.333;
    margin-top: 0;
    color: #FFFFFF;
}

.home-content__main {
    padding-top: 24rem;
    position: relative;
}

.home-content__buttons {
    padding-top: 6rem;
    text-align: left;
}

.home-content__buttons .btn {
    width: 215px;
    border-color: #FFFFFF;
    color: #FFFFFF;
    margin: 1.5rem 1.5rem 0 0;
    letter-spacing: .20rem;
    -webkit-transition: all 0.5s ease-in-out;
    transition: all 0.5s ease-in-out;
}

.home-content__buttons .btn:last-child {
    margin-right: 0;
}

.home-content__buttons .btn:hover, 
.home-content__buttons .btn:focus {
    background: #FFFFFF !important;
    color: #000000;
}


.price-content__buttons .btn {
    width: 215px;
    border-color: #FFFFFF;
    color: #FFFFFF;
    margin: 2rem 2rem 0 0;
    letter-spacing: .20rem;
    -webkit-transition: all 0.5s ease-in-out;
    transition: all 0.5s ease-in-out;
}


.price-content__buttons {
    padding-top: 6rem;
    text-align: center;
    position: center;

}

.price-content__buttons .btn:last-child {
    margin-right: 0;
}

.price-content__buttons .btn:hover, 
.price-content__buttons .btn:focus {
    background: #FFFFFF !important;
    color: #000000;
}

.home-content__scroll {
    position: absolute;
    right: 9.5rem;
    bottom: 8.4rem;
}

.home-content__scroll a {
    font-family: "montserrat-semibold", sans-serif;
    font-size: 1rem;
    text-transform: uppercase;
    letter-spacing: .3rem;
    color: #FFFFFF;
    position: relative;
    display: inline-block;
    line-height: 3rem;
    padding-left: 2.5rem;
}

.home-content__scroll a::before {
    border-bottom: 2px solid #FFC107;
    border-right: 2px solid #FFC107;
    content: '';
    display: block;
    height: 8px;
    width: 8px;
    margin-top: -6px;
    pointer-events: none;
    position: absolute;
    left: 0;
    top: 50%;
    -webkit-transform-origin: 66% 66%;
    -ms-transform-origin: 66% 66%;
    transform-origin: 66% 66%;
    -webkit-transform: rotate(45deg);
    -ms-transform: rotate(45deg);
    transform: rotate(45deg);
    -webkit-transition: all 0.15s ease-in-out;
    transition: all 0.15s ease-in-out;
}

.home-content__line {
    display: block;
    width: 2px;
    height: 10.2rem;
    background-color: #FFC107;
    position: absolute;
    right: 7.2rem;
    bottom: 0;
}


/* ------------------------------------------------------------------- 
 * ## home social 
 * ------------------------------------------------------------------- */
.home-social {
    font-family: "montserrat-regular", sans-serif;
    list-style: none;
    margin: 0;
    position: absolute;
    top: 50%;
    right: 5.4rem;
    -webkit-transform: translate3d(0, -50%, 0);
    -ms-transform: translate3d(0, -50%, 0);
    transform: translate3d(0, -50%, 0);
}

.home-social a {
    color: white;
    -webkit-transition: all 0.5s ease-in-out;
    transition: all 0.5s ease-in-out;
}

.home-social li {
    position: relative;
    padding: .9rem 0;
}

.home-social li a {
    display: block;
    width: 33px;
    height: 33px;
}

.home-social i, .home-social span {
    position: absolute;
    top: 0;
    line-height: 33px;
    -webkit-transition: all 0.5s ease-in-out;
    transition: all 0.5s ease-in-out;
}

.home-social i {
    font-size: 14px;
    right: 0;
    text-align: center;
    display: inline-block;
    width: 33px;
    height: 33px;
    line-height: calc(33px - 4px);
    border: 2px solid #FFFFFF;
    border-radius: 50%;
}

.home-social span {
    color: #FFC107;
    right: 4.5rem;
    font-size: 1.3rem;
    opacity: 0;
    visibility: hidden;
    -webkit-transform: scale(0);
    -ms-transform: scale(0);
    transform: scale(0);
    -webkit-transform-origin: 100% 50%;
    -ms-transform-origin: 100% 50%;
    transform-origin: 100% 50%;
}

.home-social li:hover span {
    opacity: 1;
    visibility: visible;
    -webkit-transform: scale(1);
    -ms-transform: scale(1);
    transform: scale(1);
}


/* animate .home-content__main
 * ------------------------------------------------------------------- */
html.cl-preload .home-content__main {
    opacity: 0;
}

html.cl-loaded .home-content__main {
    animation-duration: 2s;
    -webkit-animation-name: fadeIn;
    animation-name: fadeIn;
}

html.no-csstransitions .home-content__main {
    opacity: 1;
}


/* ------------------------------------------------------------------- 
 * ## home animations
 * ------------------------------------------------------------------- */


/* fade in */

@-webkit-keyframes fadeIn {
    from {
        opacity: 0;
        -webkit-transform: translate3d(0, 150%, 0);
        -ms-transform: translate3d(0, 150%, 0);
        transform: translate3d(0, 150%, 0);
    }
    to {
        opacity: 1;
        -webkit-transform: translate3d(0, 0, 0);
        -ms-transform: translate3d(0, 0, 0);
        transform: translate3d(0, 0, 0);
    }
}

@keyframes fadeIn {
    from {
        opacity: 0;
        -webkit-transform: translate3d(0, 150%, 0);
        -ms-transform: translate3d(0, 150%, 0);
        transform: translate3d(0, 150%, 0);
    }
    to {
        opacity: 1;
        -webkit-transform: translate3d(0, 0, 0);
        -ms-transform: translate3d(0, 0, 0);
        transform: translate3d(0, 0, 0);
    }
}


/* fade out */

@-webkit-keyframes fadeOut {
    from {
        opacity: 1;
    }
    to {
        opacity: 0;
        -webkit-transform: translate3d(0, -150%, 0);
        -ms-transform: translate3d(0, -150%, 0);
        transform: translate3d(0, -150%, 0);
    }
}

@keyframes fadeOut {
    from {
        opacity: 1;
    }
    to {
        opacity: 0;
        -webkit-transform: translate3d(0, -150%, 0);
        -ms-transform: translate3d(0, -150%, 0);
        transform: translate3d(0, -150%, 0);
    }
}


/* ------------------------------------------------------------------- 
 * responsive:
 * home
 * ------------------------------------------------------------------- */
@media only screen and (max-width: 1500px) {
    .home-content h1 {
        font-size: 6rem;
    }
    .home-content__main {
        max-width: 1000px;
    }
}

@media only screen and (max-width: 1200px) {
    .home-content h1 {
        font-size: 5.5rem;
    }
    .home-content__main {
        max-width: 800px;
    }
}

@media only screen and (max-width: 1000px) {
    .home-content h1 {
        font-size: 4.6rem;
    }
    .home-content br {
        display: none;
    }
    .home-content__main {
        padding-top: 21rem;
        padding-right: 80px;
        max-width: 680px;
    }
}

@media only screen and (max-width: 800px) {
    .home-content h3 {
        font-size: 1.5rem;
    }
    .home-content h1 {
        font-size: 4rem;
    }
    .home-content__main {
        padding-right: 70px;
        max-width: 550px;
    }
}

@media only screen and (max-width: 700px) {
    .home-content__main {
        max-width: 490px;
    }
    .home-content__buttons {
        padding-top: 1.2rem;
        text-align: center;
    }
    .home-content__buttons .btn {
        display: block;
        width: 70%;
        margin: 1.5rem 0 0 0;
    }
    .home-social {
        right: 4rem;
    }
    .home-content__scroll {
        right: 7.5rem;
    }
    .home-content__line {
        right: 5.5rem;
    }
}

@media only screen and (max-width: 600px) {
    .home-content h1 {
        font-size: 3.8rem;
    }
    .home-social {
        right: 2rem;
    }
    .home-social li {
        padding: .6rem 0;
    }
    .home-social i {
        font-size: 17px;
        border: none;
    }
    .home-social span {
        display: none;
    }
    .home-content__scroll {
        bottom: 5.4rem;
    }
    .home-content__line {
        height: 7.2rem;
    }
}

@media only screen and (max-width: 500px) {
    .s-home {
        min-height: 642px;
    }
    .home-content h1 {
        font-size: 3.5rem;
    }
    .home-content__main {
        text-align: center;
        max-width: none;
        padding-top: 15rem;
        padding-right: 25px;
        width: 85%;
    }
    .home-content__buttons {
        padding-top: 1.2rem;
    }
    .home-content__buttons .btn {
        width: auto;
        margin: 1.5rem 0 0 0;
    }
    .home-social {
        display: none;
    }
}

@media only screen and (max-width: 450px) {
    .home-content h1 {
        font-size: 3.3rem;
    }
}

@media only screen and (max-width: 400px) {
    .s-home {
        min-height: 430px;
    }
    .home-content h1 {
        font-size: 3.2rem;
    }
    .home-content__main {
        padding-top: 16.2rem;
        width: auto;
    }
}



/* ===================================================================
 * # about
 *
 * ------------------------------------------------------------------- */
.s-about {
    padding-top: 16.2rem;
    padding-bottom: 9rem;
    background-color: #FFC107;
    color: #010507;
    position: relative;
}

.s-about .section-header.has-bottom-sep::before {
    background-color: rgba(255, 255, 255, 0.25);
}

.about-desc {
    font-size: 2.4rem;
    line-height: 1.75;
    text-align: center;
    max-width: 1024px;
}


/* ------------------------------------------------------------------- 
 * ## about stats
 * ------------------------------------------------------------------- */
.about-stats {
    text-align: center;
}

.stats__col {
    margin: 5.4rem 0;
    padding: 0 2rem;
    position: relative;
    overflow: hidden;
    white-space: nowrap;
    border-right: 1px solid rgba(255, 255, 255, 0.25);
}

.stats__col:last-child {
    border-right: none;
}

.stats__count {
    font-family: "montserrat-bold", sans-serif;
    font-size: 8.4rem;
    line-height: 1;
    color: #FFFFFF;
    position: relative;
    overflow: hidden;
    text-overflow: ellipsis;
    white-space: nowrap;
}

.stats h5 {
    font-family: "montserrat-semibold", sans-serif;
    margin-top: 1.8rem;
    color: #000000;
    font-size: 1.8rem;
    line-height: 1.333;
    position: relative;
}

.about__line {
    display: block;
    width: 2px;
    height: 10.2rem;
    background-color: #FFFFFF;
    position: absolute;
    right: 7.2rem;
    top: 0;
}


/* ------------------------------------------------------------------- 
 * responsive:
 * about
 * ------------------------------------------------------------------- */
@media only screen and (max-width: 1200px) {
    .about-desc {
        font-size: 2.2rem;
        max-width: 940px;
    }
    .about-stats {
        padding-top: 3rem;
        padding-bottom: 3.9rem;
    }
    .about-stats {
        max-width: 800px;
    }
    .stats__col {
        margin: 1.5rem 0;
    }
    .stats__col:nth-child(n) {
        border: none;
    }
    .stats__col:nth-child(2n+1) {
        border-right: 1px solid rgba(255, 255, 255, 0.25);
    }
}

@media only screen and (max-width: 800px) {
    .about-desc {
        font-size: 2rem;
        max-width: 600px;
    }
    .stats__count {
        font-size: 8rem;
    }
    .stats h5 {
        margin-top: 1.2rem;
    }
}

@media only screen and (max-width: 700px) {
    .about__line {
        right: 5.5rem;
    }
}

@media only screen and (max-width: 600px) {
    .s-about {
        padding-top: 12rem;
    }
    .about-desc {
        font-size: 1.9rem;
    }
    .about-stats {
        padding-top: 0;
    }
    .stats__col {
        margin: 0;
        padding-top: 3rem;
        padding-bottom: 3rem;
        position: relative;
    }
    .stats__col::after {
        content: "";
        display: block;
        height: 1px;
        width: 250px;
        background-color: rgba(255, 255, 255, 0.25);
        position: absolute;
        bottom: 0;
        left: 50%;
        margin-left: -125px;
    }
    .stats__col:last-child::after {
        display: none;
    }
    .stats__col:nth-child(n) {
        border: none;
    }
    .about__line {
        height: 7.2rem;
    }
}

@media only screen and (max-width: 400px) {
    .about-desc {
        font-size: 1.8rem;
    }
    .stats__count {
        font-size: 7.8rem;
    }
}



/* ===================================================================
 * # services
 *
 * ------------------------------------------------------------------- */
.s-services {
    padding-top: 1.2rem;
    padding-bottom: 1.2rem;
    background-color: #FFFFFF;
    color: #757575;
    position: relative;
}

.s-prices {
    padding-top: 0rem;
    padding-bottom: 0rem;

    position: relative;
}

/* ------------------------------------------------------------------- 
 * ## services list
 * ------------------------------------------------------------------- */
.services-list {
    margin-top: 6rem;
}

.services-list .service-item {
    margin-bottom: .9rem;
}

.services-list .service-item h3 {
    margin-top: 0;
}

.services-list .service-item:nth-child(2n+1) {
    padding-right: 50px;
}

.services-list .service-item:nth-child(2n+2) {
    padding-left: 50px;
}

.services-list .service-text {
    margin-left: 7.8rem;
}

.services-list .service-icon {
    float: left;
    color: #FFC107;
    font-size: 4.8rem;
    margin-top: -.6rem;
}


/* ------------------------------------------------------------------- 
 * responsive:
 * services
 * ------------------------------------------------------------------- */
@media only screen and (max-width: 1200px) {
    .services-list {
        max-width: 1000px;
    }
    .services-list .service-item:nth-child(2n+1) {
        padding-right: 30px;
    }
    .services-list .service-item:nth-child(2n+2) {
        padding-left: 30px;
    }
}

@media only screen and (max-width: 1000px) {
    .services-list h3 {
        font-size: 2.5rem;
    }
    .services-list .service-item:nth-child(2n+1) {
        padding-right: 20px;
    }
    .services-list .service-item:nth-child(2n+2) {
        padding-left: 20px;
    }
}

@media only screen and (max-width: 800px) {
    .services-list {
        margin-top: 4.2rem;
        max-width: 500px;
        text-align: center;
    }
    .services-list .service-item:nth-child(n) {
        padding-right: 15px;
        padding-left: 15px;
    }
    .services-list h3 {
        font-size: 3rem;
    }
    .services-list .service-text {
        margin-left: 0;
    }
    .services-list .service-icon {
        font-size: 4.5rem;
        float: none;
        margin-top: 0;
    }
}

@media only screen and (max-width: 600px) {
    .s-services {
        padding-top: 12rem;
    }
    .services-list .service-item:nth-child(n) {
        padding-right: 10px;
        padding-left: 10px;
    }
    .services-list h3 {
        font-size: 2.5rem;
    }
}

@media only screen and (max-width: 400px) {
    .services-list .service-item:nth-child(n) {
        padding-right: 0;
        padding-left: 0;
    }
    .services-list h3 {
        font-size: 2.5rem;
    }
}



/* ===================================================================
 * # works
 *
 * ------------------------------------------------------------------- */
.s-works {
    background: #FFFFFF;
    padding: 0 0 15rem 0;
    min-height: 800px;
    position: relative;
}

.s-works .intro-wrap {
    padding: 15rem 0 25.2rem;
    background: #111111;
}

.works-content {
    max-width: 1160px;
    margin-top: -23.4rem;
}


/* ------------------------------------------------------------------- 
 * ## bricks/masonry
 * ------------------------------------------------------------------- */
.masonry:after {
    content: "";
    display: table;
    clear: both;
}

.masonry .grid-sizer, .masonry__brick {
    width: 50%;
}

.masonry__brick {
    float: left;
    padding: 0;
}

.item-folio {
    position: relative;
    overflow: hidden;
}

.item-folio__thumb img {
    vertical-align: bottom;
    -webkit-transition: all 0.5s ease-in-out;
    transition: all 0.5s ease-in-out;
}

.item-folio__thumb a {
    display: block;
}

.item-folio__thumb a::before {
    display: block;
    background-color: rgba(0, 0, 0, 0.8);
    content: "";
    opacity: 0;
    visibility: hidden;
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    -webkit-transition: all 0.5s ease-in-out;
    transition: all 0.5s ease-in-out;
    z-index: 1;
}

.item-folio__thumb a::after {
    content: "+";
    font-family: georgia, serif;
    font-size: 2.7rem;
    display: block;
    height: 30px;
    width: 30px;
    line-height: 30px;
    margin-left: -15px;
    margin-top: -15px;
    position: absolute;
    left: 50%;
    top: 50%;
    text-align: center;
    color: rgba(255, 255, 255, 0.8);
    opacity: 0;
    visibility: hidden;
    -webkit-transition: all 0.5s ease-in-out;
    transition: all 0.5s ease-in-out;
    -webkit-transform: scale(0.5);
    -ms-transform: scale(0.5);
    transform: scale(0.5);
    z-index: 1;
}

.item-folio__text {
    position: absolute;
    left: 0;
    bottom: 3.6rem;
    padding: 0 3.3rem;
    z-index: 2;
    opacity: 0;
    visibility: hidden;
    -webkit-transform: translate3d(0, 100%, 0);
    -ms-transform: translate3d(0, 100%, 0);
    transform: translate3d(0, 100%, 0);
    -webkit-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
}

.item-folio__title {
    font-family: "montserrat-semibold", sans-serif;
    font-size: 1.4rem;
    line-height: 1.286;
    color: #FFFFFF;
    text-transform: uppercase;
    letter-spacing: .2rem;
    margin: 0 0 .3rem 0;
}

.item-folio__cat {
    color: rgba(255, 255, 255, 0.5);
    font-family: "montserrat-light", sans-serif;
    font-size: 1.4rem;
    line-height: 1.714;
    margin-bottom: 0;
}

.item-folio__caption {
    display: none;
}

.item-folio__project-link {
    display: block;
    color: #FFFFFF;
    box-shadow: 0 0 0 1px #FFFFFF;
    border-radius: 50%;
    height: 4.2rem;
    width: 4.2rem;
    text-align: center;
    z-index: 500;
    position: absolute;
    top: 3rem;
    left: 3rem;
    opacity: 0;
    visibility: hidden;
    -webkit-transform: translate3d(0, -100%, 0);
    -ms-transform: translate3d(0, -100%, 0);
    transform: translate3d(0, -100%, 0);
}

.item-folio__project-link i {
    font-size: 1.8rem;
    line-height: 4.2rem;
}

.item-folio__project-link::before {
    display: block;
    content: "";
    height: 3rem;
    width: 1px;
    background-color: rgba(255, 255, 255, 0.1);
    position: absolute;
    top: -3rem;
    left: 50%;
}

.item-folio__project-link:hover,
.item-folio__project-link:focus,
.item-folio__project-link:active {
    background-color: #FFFFFF;
    color: #000000;
}


/* on hover 
 * ----------------------------------------------- */
.item-folio:hover .item-folio__thumb a::before {
    opacity: 1;
    visibility: visible;
}

.item-folio:hover .item-folio__thumb a::after {
    opacity: 1;
    visibility: visible;
    -webkit-transform: scale(1);
    -ms-transform: scale(1);
    transform: scale(1);
}

.item-folio:hover .item-folio__thumb img {
    -webkit-transform: scale(1.05);
    -ms-transform: scale(1.05);
    transform: scale(1.05);
}

.item-folio:hover .item-folio__project-link,
.item-folio:hover .item-folio__text {
    opacity: 1;
    visibility: visible;
    -webkit-transform: translate3d(0, 0, 0);
    -ms-transform: translate3d(0, 0, 0);
    transform: translate3d(0, 0, 0);
}


/* ------------------------------------------------------------------- 
 * responsive:
 * works
 * ------------------------------------------------------------------- */
@media only screen and (max-width: 800px) {
    .item-folio__title, .item-folio__cat {
        font-size: 1.3rem;
    }
}

@media only screen and (max-width: 600px) {
    .s-works {
        padding-bottom: 12rem;
    }
    .s-works .intro-wrap {
        padding: 12rem 0 25.2rem;
    }
    .works-content {
        margin-top: -25.2rem;
    }
    .masonry__brick {
        float: none;
        width: 100%;
    }
    .item-folio__title, .item-folio__cat {
        font-size: 1.4rem;
    }
}



/* ===================================================================
 * # clients
 *
 * ------------------------------------------------------------------- */
.s-clients {
    padding-top: 2.2rem;
    padding-bottom: 2.8rem;
    background-color: #e6e6e6;
    color: #757575;
    position: relative;
}


/* ------------------------------------------------------------------- 
 * ## slider
 * ------------------------------------------------------------------- */
.clients-outer {
    margin-top: 0.6rem;
    padding-bottom: 8rem;
    text-align: center;
    position: relative;
}

.clients__slide {
    display: block;
    opacity: .55;
    padding: 1.5rem 2.8rem;
    -webkit-transition: opacity 0.5s ease-in-out;
    transition: opacity 0.5s ease-in-out;
}

.clients__slide:hover, .clients__slide:focus {
    opacity: 1;
}


/* ------------------------------------------------------------------- 
 * ## testimonials
 * ------------------------------------------------------------------- */
.clients-testimonials {
    margin-top: 4.2rem;
    padding-top: 2.2rem;
    text-align: center;
    position: relative;
}

.clients-testimonials::before {
    content: "";
    display: block;
    height: 1px;
    width: 550px;
    background-color: rgba(0, 0, 0, 0.1);
    text-align: center;
    position: absolute;
    top: 0;
    left: 50%;
    -webkit-transform: translateX(-50%);
    -ms-transform: translateX(-50%);
    transform: translateX(-50%);
}

.clients-testimonials .testimonials {
    margin: 0 10%;
}

.clients-testimonials .testimonials p {
    font-family: "lora-regular", serif;
    font-size: 3rem;
    line-height: 1.8;
    color: #555555;
    margin-bottom: 6rem;
}

.clients-testimonials .testimonials__slide {
    padding: 0 0 3rem 0;
}

.clients-testimonials .testimonials__avatar {
    height: 8.4rem;
    width: 8.4rem;
    border-radius: 50%;
    margin: 0 auto 1.2rem auto;
}

.clients-testimonials .testimonials__name, 
.clients-testimonials .testimonials__pos {
    display: block;
}

.clients-testimonials .testimonials__name {
    font-family: "montserrat-semibold", sans-serif;
    color: #000000;
}

.clients-testimonials .testimonials__pos {
    font-family: "montserrat-light", sans-serif;
    font-size: 1.4rem;
}

.clients-testimonials .testimonials .slick-arrow {
    position: absolute;
    top: 7.2rem;
    width: 66px;
    height: 66px;
    margin: 0;
    padding: 0;
    background-color: transparent;
    background-repeat: no-repeat;
    background-size: 22px 15px;
    background-position: center;
    border: none;
    cursor: pointer;
    -webkit-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
    font: 0/0 a;
    text-shadow: none;
    color: transparent;
    z-index: 2;
}

.clients-testimonials .testimonials .slick-prev {
    left: -130px;
    background-image: url("../images/left-arrow.png");
}

.clients-testimonials .testimonials .slick-next {
    right: -130px;
    background-image: url("../images/right-arrow.png");
}

.clients-testimonials .testimonials .slick-dots {
    margin-top: -0.6px;
}




/*--------------------------------------------------------------
# Testimonials
--------------------------------------------------------------*/
.testimonials {
    padding: 50px 0;
    background: url("/images/testimonials-bg.jpg") no-repeat;
    background-position: center center;
    background-size: cover;
    position: relative;
  }
  .testimonials::before {
    content: "";
    position: absolute;
    left: 0;
    right: 0;
    top: 0;
    bottom: 0;
    background: rgba(0, 0, 0, 0.7);
  }
  .testimonials .section-header {
    margin-bottom: 40px;
  }
  .testimonials .testimonials-carousel, .testimonials .testimonials-slider {
    overflow: hidden;
  }
  .testimonials .testimonial-item {
    text-align: center;
    color: #fff;
  }
  .testimonials .testimonial-item .testimonial-img {
    width: 100px;
    border-radius: 50%;
    border: 6px solid rgba(255, 255, 255, 0.15);
    margin: 0 auto;
  }
  .testimonials .testimonial-item h3 {
    font-size: 20px;
    font-weight: bold;
    margin: 10px 0 5px 0;
    color: #fff;
  }
  .testimonials .testimonial-item h4 {
    font-size: 14px;
    color: #ddd;
    margin: 0 0 15px 0;
  }
  .testimonials .testimonial-item .quote-icon-left, .testimonials .testimonial-item .quote-icon-right {
    color: rgba(255, 255, 255, 0.6);
    font-size: 26px;
  }
  .testimonials .testimonial-item .quote-icon-left {
    display: inline-block;
    left: -5px;
    position: relative;
  }
  .testimonials .testimonial-item .quote-icon-right {
    display: inline-block;
    right: -5px;
    position: relative;
    top: 10px;
  }
  .testimonials .testimonial-item p {
    font-style: italic;
    margin: 0 auto 15px auto;
    color: #eee;
  }
  .testimonials .swiper-pagination {
    margin-top: 10px;
    position: relative;
  }
  .testimonials .swiper-pagination .swiper-pagination-bullet {
    width: 12px;
    height: 12px;
    background-color: rgba(255, 255, 255, 0.4);
    opacity: 0.5;
  }
  .testimonials .swiper-pagination .swiper-pagination-bullet-active {
    background-color: #ffc451;
    opacity: 1;
  }
  @media (min-width: 1024px) {
    .testimonials {
      background-attachment: fixed;
    }
  }
  @media (min-width: 992px) {
    .testimonials .testimonial-item p {
      width: 80%;
    }
  }
  
/* ------------------------------------------------------------------- 
 * responsive:
 * clients
 * ------------------------------------------------------------------- */
@media only screen and (max-width: 1200px) {
    .clients-testimonials .testimonials {
        margin: 0 12%;
    }
    .clients-testimonials .testimonials p {
        font-size: 2.6rem;
    }
    .clients-testimonials .testimonials .slick-prev {
        left: -100px;
    }
    .clients-testimonials .testimonials .slick-next {
        right: -100px;
    }
}

@media only screen and (max-width: 1000px) {
    .clients-testimonials .testimonials p {
        font-size: 2.2rem;
    }
}

@media only screen and (max-width: 800px) {
    .clients-testimonials::before {
        width: 400px;
    }
    .clients-testimonials .testimonials {
        margin: 0 2rem;
    }
    .clients-testimonials .testimonials .slick-arrow {
        top: auto;
        bottom: 3rem;
    }
    .clients-testimonials .testimonials .slick-prev {
        left: 0;
    }
    .clients-testimonials .testimonials .slick-next {
        right: 0;
    }
}

@media only screen and (max-width: 600px) {
    .s-clients {
        padding-top: 12rem;
    }
    .clients-testimonials::before {
        width: 250px;
    }
    .clients-testimonials .testimonials {
        margin: 0;
    }
    .clients-testimonials .testimonials p {
        font-size: 2rem;
    }
}

@media only screen and (max-width: 400px) {
    .clients-testimonials .testimonials p {
        font-size: 1.9rem;
    }
}



/* ===================================================================
 * # contact 
 *
 * ------------------------------------------------------------------- */
.s-contact {
    background-color: #151515;
    background-image: url("../images/contact-bg.jpg");
    background-repeat: no-repeat;
    background-position: center, center;
    padding-top: 15rem;
    padding-bottom: 12rem;
    color: rgba(255, 255, 255, 0.5);
    position: relative;
}

.s-contact .overlay {
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    opacity: .8;
    background-color: #151515;
}

.s-contact .form-field {
    position: relative;
}

.s-contact .form-field:after {
    content: "";
    display: table;
    clear: both;
}

.s-contact .form-field label {
    font-family: "montserrat-light", sans-serif;
    font-size: 1rem;
    line-height: 2.4rem;
    position: absolute;
    bottom: -0.3rem;
    right: .6rem;
    text-transform: uppercase;
    letter-spacing: .1rem;
    padding: 0 2rem;
    margin: 0;
    color: #FFFFFF;
    background: #FFC107;
}

.s-contact .form-field label::after {
    content: "";
    position: absolute;
    left: -5px;
    top: 50%;
    margin-top: -6px;
    border-top: 5px solid transparent;
    border-bottom: 5px solid transparent;
    border-right: 5px solid #FFC107;
}

.contact__line {
    display: block;
    width: 2px;
    height: 20.4rem;
    background-color: #FFC107;
    position: absolute;
    left: 50%;
    top: -10.2rem;
    margin-left: -1px;
}

.contact-content {
    max-width: 1000px;
    background-color: rgba(0, 0, 0, 0.2);
    color: rgba(255, 255, 255, 0.4);
    padding-top: 6rem;
    padding-bottom: 6rem;
    font-family: "montserrat-light", sans-serif;
    font-size: 1.5rem;
    line-height: 2;
    position: relative;
}

.contact-content h3 {
    margin-top: 0;
    margin-bottom: 6.6rem;
    color: #FFFFFF;
}

.contact-content h5 {
    margin-top: 0;
    color: #FFC107;
}

.contact-content input[type="email"],
.contact-content input[type="number"],
.contact-content input[type="search"],
.contact-content input[type="text"],
.contact-content input[type="tel"],
.contact-content input[type="url"],
.contact-content input[type="password"],
.contact-content textarea,
.contact-content select {
    color: rgba(255, 255, 255, 0.6);
    border-bottom: 1px solid rgba(255, 255, 255, 0.07);
    margin-bottom: .9rem;
}

.contact-content input[type="email"]:focus,
.contact-content input[type="number"]:focus,
.contact-content input[type="search"]:focus,
.contact-content input[type="text"]:focus,
.contact-content input[type="tel"]:focus,
.contact-content input[type="url"]:focus,
.contact-content input[type="password"]:focus,
.contact-content textarea:focus,
.contact-content select:focus {
    color: #FFFFFF;
    border-bottom: 1px solid #FFC107;
}

.contact-content button,
.contact-content .btn {
    margin-top: 3.6rem;
}
.contact-content input::-webkit-input-placeholder,
.contact-content select::-webkit-input-placeholder,
.contact-content textarea::-webkit-input-placeholder {
    color: #4f4f4f;
}

.contact-content input:-moz-placeholder,
.contact-content select:-moz-placeholder,
.contact-content textarea:-moz-placeholder {
    color: #4f4f4f;    /* Firefox 18- */
}

.contact-content input::-moz-placeholder,
.contact-content select::-moz-placeholder,
.contact-content textarea::-moz-placeholder {
    color: #4f4f4f;    /* Firefox 19+ */
}

.contact-content input:-ms-input-placeholder,
.contact-content select:-ms-input-placeholder,
.contact-content textarea:-ms-input-placeholder {
    color: #4f4f4f;
}

.contact-content input.placeholder,
.contact-content select.placeholder,
.contact-content textarea.placeholder {
    color: #4f4f4f !important;
}
.contact-primary, .contact-secondary {
    float: left;
    padding: 0 5rem;
}

.contact-primary {
    width: 65%;
}

.contact-primary #contactForm {
    margin-top: -1.5rem;
}

.contact-secondary {
    width: 35%;
}

.contact-secondary::before {
    content: "";
    display: block;
    width: 35%;
    position: absolute;
    top: 0;
    bottom: 0;
    right: 0;
    background-color: #121212;
}

.contact-secondary .contact-info {
    position: relative;
}

.contact-secondary .cinfo {
    margin-bottom: 4.8rem;
}

.contact-social {
    list-style: none;
    display: inline-block;
    margin: 0;
    font-size: 2rem;
}

.contact-social li {
    margin-right: 15px;
    padding-left: 0;
    display: inline-block;
}

.contact-social li a {
    color: white;
}

.contact-social li a:hover, 
.contact-social li a:focus {
    color: #FFC107;
}

.contact-social li:last-child {
    margin: 0;
}

.message-warning, 
.message-success {
    display: none;
    background: #111111;
    font-size: 1.5rem;
    line-height: 2;
    padding: 3rem;
    margin-bottom: 3.6rem;
    width: 100%;}

.message-warning {
    color: #ff6163;
}

.message-success {
    color: #FFC107;
}

.message-warning i, .message-success i {
    margin-right: 10px;
    font-size: 1.2rem;
}


/* form loader
 * ----------------------------------------------- */
.submit-loader {
    display: none;
    position: relative;
    left: 0;
    top: 1.8rem;
    width: 100%;
    text-align: center;
    margin-bottom: 3rem;
}

.submit-loader .text-loader {
    display: none;
    font-family: "montserrat-regular", sans-serif;
    font-size: 1.3rem;
    font-weight: bold;
    line-height: 1.846;
    color: #FFFFFF;
    letter-spacing: .2rem;
    text-transform: uppercase;
}

.oldie .submit-loader .s-loader {
    display: none;
}

.oldie .submit-loader .text-loader {
    display: block;
}


/* --------------------------------------------------------------- 
 * ## loader animation 
 * --------------------------------------------------------------- */
.s-loader {
    margin: 1.2rem auto 3rem;
    width: 70px;
    text-align: center;
    -webkit-transform: translateX(0.45rem);
    -ms-transform: translateX(0.45rem);
    transform: translateX(0.45rem);
}

.s-loader > div {
    width: 9px;
    height: 9px;
    background-color: #FFFFFF;
    border-radius: 100%;
    display: inline-block;
    margin-right: .9rem;
    -webkit-animation: bouncedelay 1.4s infinite ease-in-out both;
    animation: bouncedelay 1.4s infinite ease-in-out both;
}

.s-loader .bounce1 {
    -webkit-animation-delay: -0.32s;
    animation-delay: -0.32s;
}

.s-loader .bounce2 {
    -webkit-animation-delay: -0.16s;
    animation-delay: -0.16s;
}

@-webkit-keyframes bouncedelay {
    0%, 80%, 100% {
        -webkit-transform: scale(0);
        -ms-transform: scale(0);
        transform: scale(0);
    }
    40% {
        -webkit-transform: scale(1);
        -ms-transform: scale(1);
        transform: scale(1);
    }
}

@keyframes bouncedelay {
    0%, 80%, 100% {
        -webkit-transform: scale(0);
        -ms-transform: scale(0);
        transform: scale(0);
    }
    40% {
        -webkit-transform: scale(1);
        -ms-transform: scale(1);
        transform: scale(1);
    }
}


/* ------------------------------------------------------------------- 
 * responsive:
 * contact
 * ------------------------------------------------------------------- */
@media only screen and (max-width: 1200px) {
    .contact-content {
        max-width: 900px;
    }
}

@media only screen and (max-width: 1000px) {
    .contact-content {
        max-width: 700px;
    }
    .contact-primary, .contact-secondary {
        float: none;
        width: 100%;
    }
    .contact-primary #contactForm {
        margin-top: -1.5rem;
        margin-bottom: 7.2rem;
    }
    .contact-secondary .hide-on-fullwidth {
        display: none;
    }
    .contact-secondary::before {
        display: none;
    }
    .message-warning, .message-success {
        margin-bottom: 6rem;
    }
}

@media only screen and (max-width: 800px) {
    .contact-content h3 {
        text-align: center;
    }
}

@media only screen and (max-width: 600px) {
    .s-contact {
        padding-top: 12rem;
        padding-bottom: 0;
    }
    .contact__line {
        height: 14.4rem;
        top: -7.2rem;
    }
    .contact-content {
        padding-bottom: 12rem;
        text-align: center;
    }
    .contact-primary, .contact-secondary {
        padding: 0 20px;
    }
}

@media only screen and (max-width: 400px) {
    .contact-primary, .contact-secondary {
        padding: 0 5px;
    }
}



/* ===================================================================
 * # footer
 *
 * ------------------------------------------------------------------- */
footer {
    padding: 9rem 0 6rem;
    font-family: "montserrat-light", sans-serif;
    font-size: 15px;
    line-height: 2;
    text-align: center;
    color: rgba(255, 255, 255, 0.3);
}

footer h4 {
    color: #FFFFFF;
    font-size: 1.6rem;
    line-height: 1.313;
    margin-top: 0;
    margin-bottom: 3.6rem;
}

footer a {
    color: #FFFFFF;
}

footer a:hover, footer a:focus, footer a:active {
    color: #FFC107;
}

footer .row {
    max-width: 980px;
}


/* --------------------------------------------------------------- 
 * ## footer main
 * --------------------------------------------------------------- */
.footer-main {
    text-align: left;
}

.footer-main .left {
    padding-right: 40px;
}

.footer-main .right {
    padding-left: 40px;
}

.footer-logo {
    display: block;
    margin: -.6rem 0 3.6rem 0;
    padding: 0;
    outline: 0;
    border: none;
    width: 85px;
    height: 28px;
    background: url("../images/logo-footer.png") no-repeat center;
    background-size: 85px 28px;
    font: 0/0 a;
    text-shadow: none;
    color: transparent;
    -webkit-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
}

.footer-subscribe .subscribe-form {
    margin: 0;
    padding: 0;
    position: relative;
}

.footer-subscribe #mc-form {
    width: 100%;
}

.footer-subscribe #mc-form input[type="email"] {
    width: 100%;
    height: 5.4rem;
    padding: 1.2rem 160px 1.2rem 60px;
    background: url(../images/email-icon.png) 20px center no-repeat, rgba(0, 0, 0, 0.1);
    background-size: 24px 16px, auto;
    border: none;
    margin-bottom: 1.8rem;
    color: rgba(255, 255, 255, 0.5);
}

.footer-subscribe #mc-form input[type="email"]:focus {
    color: #FFFFFF;
}

.footer-subscribe #mc-form input[type="email"]::-webkit-input-placeholder {
    color: rgba(255, 255, 255, 0.2);
}

.footer-subscribe #mc-form input[type="email"]:-moz-placeholder {
    color: rgba(255, 255, 255, 0.2);
    /* Firefox 18- */
}

.footer-subscribe #mc-form input[type="email"]::-moz-placeholder {
    color: rgba(255, 255, 255, 0.2);
    /* Firefox 19+ */
}

.footer-subscribe #mc-form input[type="email"]:-ms-input-placeholder {
    color: rgba(255, 255, 255, 0.2);
}

.footer-subscribe #mc-form input[type="email"].placeholder {
    color: rgba(255, 255, 255, 0.2) !important;
}

.footer-subscribe #mc-form input[type=submit] {
    position: absolute;
    top: 0;
    right: 0;
    color: #FFFFFF;
    background: #FFC107;
    border-color: #FFC107;
    padding: 0 20px;
}

.footer-subscribe #mc-form label {
    color: #FFFFFF;
    font-family: "montserrat-regular", sans-serif;
    font-size: 1.3rem;
    padding: 0 2rem;
}

.footer-subscribe #mc-form label i {
    padding-right: 6px;
}


/* ---------------------------------------------------------------
 * ## footer bottom
 * --------------------------------------------------------------- */
.footer-bottom {
    margin-top: 5.4rem;
    text-align: center;
    font-size: 14px;
}

.footer-bottom .copyright span {
    display: inline-block;
}

.footer-bottom .copyright span::after {
    content: "|";
    display: inline-block;
    padding: 0 1rem 0 1.2rem;
    color: rgba(255, 255, 255, 0.05);
}

.footer-bottom .copyright span:last-child::after {
    display: none;
}


/* ------------------------------------------------------------------- 
 * ## go to top
 * ------------------------------------------------------------------- */
.go-top {
    position: fixed;
    bottom: 30px;
    right: 30px;
    z-index: 600;
    display: none;
}

.go-top a, .go-top a:visited {
    text-decoration: none;
    border: 0 none;
    display: block;
    height: 60px;
    width: 60px;
    line-height: 60px;
    text-align: center;
    background: black;
    color: rgba(255, 255, 255, 0.5);
    text-align: center;
    text-transform: uppercase;
    -webkit-transition: all 0.3s ease-in-out;
    transition: all 0.3s ease-in-out;
}

.go-top a i, .go-top a:visited i {
    font-size: 18px;
    line-height: inherit;
}

.go-top a:hover, .go-top a:focus {
    color: #FFFFFF;
}


/* ------------------------------------------------------------------- 
 * responsive:
 * footer
 * ------------------------------------------------------------------- */
@media only screen and (max-width: 900px) {
    .footer-main .left {
        padding-right: 20px;
    }
    .footer-main .right {
        padding-left: 20px;
    }
}

@media only screen and (max-width: 800px) {
    footer .row {
        max-width: 600px;
    }
    .footer-main .left {
        padding-right: 15px;
        margin-bottom: 4.2rem;
    }
    .footer-main .right {
        padding-left: 15px;
    }
}

@media only screen and (max-width: 600px) {
    .footer-main .left {
        padding-right: 10px;
    }
    .footer-main .right {
        padding-left: 10px;
    }
    .footer-logo {
        margin: -.6rem auto 3.6rem;
    }
    .footer-bottom {
        padding-bottom: .6rem;
    }
    .footer-bottom .copyright span {
        display: block;
    }
    .footer-bottom .copyright span::after {
        display: none;
    }
    .go-top {
        right: 0;
        bottom: 0;
    }
}

@media only screen and (max-width: 500px) {
    .footer-subscribe #mc-form input[type="email"] {
        padding: 1.2rem 20px 1.2rem;
        background: rgba(0, 0, 0, 0.1);
        text-align: center;
    }
    .footer-subscribe #mc-form input[type=submit] {
        position: static;
        width: 100%;
        margin-bottom: 1.8rem;
    }
    .footer-subscribe #mc-form label {
        text-align: center;
    }
}

@media only screen and (max-width: 400px) {
    .footer-main .left {
        padding-right: 0;
    }
    .footer-main .right {
        padding-left: 0;
    }
}


/*# sourceMappingURL=main.css.map */