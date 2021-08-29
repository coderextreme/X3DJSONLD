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
  presentation(notessizex=4324,notessizey=5764,
    children=[
    master(id='4',type=main,href=master04.htm,xmlhref=master04.x3d,template=Brutzman,Moves,OpenHouse,Fall2000,layout=title_body,slots=title,body,dateTime,footer,slideNumber,
      children=[
      schemes(
        children=[
        colorscheme(colors=#FFFFFF,#000000,#808080,#000000,#00CC99,#3333CC,#CCCCFF,#B2B2B2),
        colorscheme(colors=#0000FF,#FFFFFF,#000000,#FFFF00,#FF9900,#00FFFF,#FF0000,#969696),
        colorscheme(colors=#FFFFCC,#000000,#666633,#808000,#339933,#800000,#0033CC,#FFCC66),
        colorscheme(colors=#FFFFFF,#000000,#333333,#000000,#DDDDDD,#808080,#4D4D4D,#EAEAEA),
        colorscheme(colors=#FFFFFF,#000000,#808080,#000000,#FFCC66,#0000FF,#CC00CC,#C0C0C0),
        colorscheme(colors=#FFFFFF,#000000,#808080,#000000,#C0C0C0,#0066FF,#FF0000,#009900),
        colorscheme(colors=#FFFFFF,#000000,#808080,#000000,#3399FF,#99FFCC,#CC00CC,#B2B2B2)])]),
    master(id='1',type=notes,href=master01.htm,layout=notes,slots=header,dateTime,slideImage,body,footer,slideNumber),
    master(id='2',type=handout,href=master02.htm,layout=handout,slots=header,dateTime,footer,slideNumber),
    slide(id='5',href=slide0005.htm,layout=title_body,slots=title,body,
      children=[
      headersfooters(noheader=t)]),
    slide(id='25',href=slide0025.htm,layout=title_body,slots=title,body),
    slide(id='56',href=slide0056.htm,layout=title_body,slots=title,body),
    slide(id='51',href=slide0051.htm,layout=title_body,slots=title,body),
    slide(id='55',href=slide0055.htm,layout=title_only,slots=title),
    slide(id='45',href=slide0045.htm,layout=title_only,slots=title),
    slide(id='50',href=slide0050.htm,layout=title_only,slots=title),
    slide(id='52',href=slide0052.htm,layout=title_body,slots=title,body),
    slide(id='54',href=slide0054.htm,layout=title_body,slots=title,body),
    slide(id='53',href=slide0053.htm,layout=title_body,slots=title,body),
    slide(id='41',href=slide0041.htm,layout=title_only,slots=title),
    slide(id='42',href=slide0042.htm,layout=title_only,slots=title),
    slide(id='44',href=slide0044.htm,layout=title_only,slots=title),
    slide(id='57',href=slide0057.htm,layout=title_only,slots=title),
    slide(id='46',href=slide0046.htm,layout=title_only,slots=title),
    slide(id='47',href=slide0047.htm,layout=title_only,slots=title),
    slide(id='43',href=slide0043.htm,layout=title_only,slots=title),
    slide(id='59',href=slide0059.htm,layout=title_only,slots=title),
    slide(id='61',href=slide0061.htm,layout=title_only,slots=title),
    slide(id='60',href=slide0060.htm,layout=title_only,slots=title),
    slide(id='58',href=slide0058.htm,layout=title_body,slots=title,body),
    slide(id='48',href=slide0048.htm,layout=title_body,slots=title,body),
    slide(id='23',href=slide0023.htm,layout=title_body,slots=title,body),
    viewstate(type=slideView,vertbarstate=0,horizbarstate=2),
    font(name='Times New Roman',charset=0,type=4),
    font(name='Arial',charset=0,type=4,family=34),
    font(name='Book Antiqua',charset=0,type=4,family=18),
    font(name='Monotype Sorts',charset=2,type=4,family=2),
    headersfooters(noheader=t),
    headersfooters(notes=t,slidenumber=t,footerstr=NPS,Capabilities:,Modeling,USS,Greeneville,MV,Ehime,Maru,Collision,formatid=3,nouserdate=t,todaydate=t),
    pptdocumentsettings(framecolors=PresentationSchemeAccentColor,browsersupport=dual)]),
  shapedefaults(ext=edit,spidmax=122882,style_='mso-wrap-style:none',
    children=[
    fill(type=solid,
      children=[
      fill(ext=view,type=background)]),
    stroke(startarrowwidth=narrow,startarrowlength=short,endarrowwidth=narrow,endarrowlength=short,weight=1pt),
    colormru(ext=edit,colors=#090,#006),
    colormenu(ext=edit,fillcolor=#006,strokecolor=none,shadowcolor=none)])])]
###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
