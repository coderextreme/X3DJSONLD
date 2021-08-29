###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

children=[
xml(
  children=[
  presentation(
    children=[
    master(id='3',type=main,href=master03.htm,xmlhref=master03.x3d,template=Default,Design,layout=title_body,slots=title,body,dateTime,footer,slideNumber,
      children=[
      schemes(
        children=[
        colorscheme(colors=#0000FF,#FFFFFF,#000000,#FFFF00,#FF9900,#00FFFF,#FF0000,#969696),
        colorscheme(colors=#FFFFFF,#000000,#808080,#000000,#00CC99,#3333CC,#CCCCFF,#B2B2B2),
        colorscheme(colors=#FFFFFF,#000000,#333333,#000000,#DDDDDD,#808080,#4D4D4D,#EAEAEA),
        colorscheme(colors=#FFFFCC,#000000,#666633,#808000,#339933,#800000,#0033CC,#FFCC66),
        colorscheme(colors=#FFFFFF,#000000,#808080,#000000,#FFCC66,#0000FF,#CC00CC,#C0C0C0),
        colorscheme(colors=#FFFFFF,#000000,#808080,#000000,#C0C0C0,#0066FF,#FF0000,#009900),
        colorscheme(colors=#FFFFFF,#000000,#808080,#000000,#3399FF,#99FFCC,#CC00CC,#B2B2B2)])]),
    master(id='1',type=notes,href=master01.htm,layout=notes,slots=header,dateTime,slideImage,body,footer,slideNumber),
    master(id='2',type=handout,href=master02.htm,layout=handout,slots=header,dateTime,footer,slideNumber),
    slide(id='3',href=slide0003.htm,layout=title_subtitle,slots=centerTitle,subTitle),
    slide(id='12',href=slide0012.htm,layout=title_body,slots=title,body),
    slide(id='5',href=slide0005.htm,layout=title_body,slots=title,body),
    slide(id='6',href=slide0006.htm,layout=title_body,slots=title,body),
    slide(id='14',href=slide0014.htm,layout=title_body,slots=title,body),
    slide(id='16',href=slide0016.htm,layout=2_columns,slots=title,body,clipart),
    slide(id='13',href=slide0013.htm,layout=title_body,slots=title,body),
    slide(id='9',href=slide0009.htm,layout=title_only,slots=title),
    slide(id='10',href=slide0010.htm,layout=title_only,slots=title),
    slide(id='7',href=slide0007.htm,layout=title_body,slots=title,body),
    slide(id='15',href=slide0015.htm),
    slide(id='11',href=slide0011.htm,layout=title_only,slots=title),
    slide(id='8',href=slide0008.htm,layout=title_body,slots=title,body),
    slide(id='2',href=slide0002.htm,layout=title_only,slots=title),
    slide(id='4',href=slide0004.htm,layout=title_body,slots=title,body),
    slide(id='17',href=slide0017.htm,layout=title_only,slots=title),
    viewstate(type=slideView,restoredtop=838,manualadjusttop=t),
    font(name='Times New Roman',charset=0,type=6,family=18),
    headersfooters(noheader=t),
    pptdocumentsettings(framecolors=WhiteTextOnBlack,hideslideanimation=t,browsersupport=dual)]),
  shapedefaults(ext=edit,spidmax=34818,
    children=[
    colormru(ext=edit,colors=red),
    colormenu(ext=edit,fillcolor=none,strokecolor=none)])])]
###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
