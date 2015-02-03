<?php
$path = drupal_get_path('module', 'calculator');
?>
 <link rel="stylesheet" type="text/css" href=<?php echo $path."/css/calculator.css"; ?>>
<div title="" style="" id="calculator" class="" align="" lang="">
    <div title="" style="" id="" class="top" align="" lang=""></div>
    <div title="" style="" id="" class="content" align="" lang="">
        <form name="myform" method="" id="" class="" action="">
            <div title="" style="" id="" class="leftSide" align="" lang="">
                <p>
                    <strong>Average Blood Sugar</strong>
                    <br>
(from 100-300 mg/dL)</p>
            </div>
            <div title="" id="" class="fieldCell" align="" lang="" style="border: solid 1px #0066CC;">

                <input style=" width: 40px;" name="ABS" maxlength="4" id="" type="text" >
				
            </div>
            <div title="" style="" id="" class="middle" align="" lang="">
                <a href="#" onclick="whatCalc(myform)" target="_self"><img src="<?php echo $path; ?>/images/calculate_btn.gif" alt="Calculate" border="0" height="22" width="90"></a>
            </div>
            <div title="" style="" id="" class="fieldCell" align="" lang="">
                <div title="" style=" padding-bottom: 5px; width: 40px; border: solid 1px #0066CC; float: left; padding-right: 5px; padding-left: 5px; display: block; padding-top: 5px;" id="newField" class="" align="" lang="">&nbsp;</div>
                <input style=" width: 40px;" name="A1C" maxlength="4" id="" type="hidden">
            </div>
            <div title="" style="" id="" class="rightSide" align="" lang="">
                <p>
                    <strong>A1C</strong>
                </p>
            </div>
            <div title="" style="" id="" class="clearBoth" align="" lang=""></div>
        </form>
        <div title="" style=" display: none;" id="alert1" class="answer" align="left" lang="">
            <p>Please use a number between 100 and 300.</p>
        </div>
        <div title="" style="display: block;" id="alert2" class="answer" align="left" lang="">
            <p>Please use a number between 5 and 12.</p>
        </div>
        <p>
            </p><div class="footnote">
                <sup title="" style="" id="" class="" lang="">*</sup>Please
 discuss this additional information with your healthcare provider to 
gain a better understanding of your overall diabetes management plan. 
The calculation should not be used to make therapy decisions or changes.</div>
        <p></p>
    </div>
    <div title="" style="" id="" class="bottom" align="" lang=""></div>
</div><div title="" style="" id="" class="clearBoth" align="" lang=""></div>