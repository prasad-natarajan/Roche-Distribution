function whatCalc(myform) {
	if (myform.ABS.value) {
	if (myform.ABS.value > 99 && myform.ABS.value < 301) {
		calc1(myform);
		} else {
		hideAll();
		changeDiv('alert1','block');
		}
	} else if (myform.A1C.value > 4.9 && myform.A1C.value < 12.1) {
		calc2(myform);
		} else {
		hideAll();
		changeDiv('alert2','block');
	}
}


function calc1(myform) {
a = myform.ABS.value*1;
b = a+46.7;
c = 28.7;
d = b/c*100;
A1C = Math.floor(d)/100;

myform.A1C.value = A1C;

document.getElementById('newField').innerHTML = A1C;

if (A1C < 5.9) {
	hideAll();
	changeDiv('answer1','block');
} else if (A1C < 7 && A1C > 5.9) {
	hideAll();
	changeDiv('answer2','block');
} else if (A1C < 8 && A1C > 7) {
	hideAll();
	changeDiv('answer3','block');
} else {
	hideAll();
	changeDiv('answer4','block');
}
}

function calc2(myform) {
A1C = myform.A1C.value;
a = myform.A1C.value*1;
b = a*28.7;
c = b-46.7;

ABS = Math.floor(c);

myform.ABS.value = ABS;


if (A1C < 5.9) {
	hideAll();
	changeDiv('answer1','block');
} else if (A1C < 7 && A1C > 5.9) {
	hideAll();
	changeDiv('answer2','block');
} else if (A1C < 8 && A1C > 7) {
	hideAll();
	changeDiv('answer3','block');
} else {
	hideAll();
	changeDiv('answer4','block');
}
}




function changeDiv(the_div,the_change) {
  var the_style = getStyleObject(the_div);
  if (the_style != false) {
    the_style.display = the_change;
  }
}

function hideAll() {
  changeDiv("answer1","none");
  changeDiv("answer2","none");
  changeDiv("answer3","none");
  changeDiv("answer4","none");
  changeDiv("alert1","none");
  changeDiv("alert2","none");
}

function getStyleObject(objectId) {
  if (document.getElementById && document.getElementById(objectId)) {
    return document.getElementById(objectId).style;
  } else if (document.all && document.all(objectId)) {
    return document.all(objectId).style;
  } else {
    return false;
  }
}