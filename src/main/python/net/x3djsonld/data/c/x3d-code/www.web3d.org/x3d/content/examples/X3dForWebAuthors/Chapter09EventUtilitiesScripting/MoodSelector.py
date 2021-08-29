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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='MoodSelector.x3d',name='title'),
    meta(content='Design pattern demonstrating multiple TouchSensor, IntegerTrigger, Shape and ROUTE combinations for selecting a Switch',name='description'),
    meta(content='Jason Nelson and MV4205 class',name='creator'),
    meta(content='6 April 2009',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='smiley images are open source',name='license'),
    meta(content='http://openclipart.org/media/tags/smiley',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter09EventUtilitiesScripting/MoodSelector.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='MoodSelector.x3d'),
    Viewpoint(description='How do you feel today?',position=(0,0,15)),
    Transform(translation=(0,3,0),
      children=[
      TouchSensor(DEF='howFeelText',description='Touch to select your mood face'),
      Shape(
        geometry=Text(string=["How do you feel today?"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(),))]),
    Transform(translation=(-5,0,0),
      children=[
      TouchSensor(DEF='happyText',description='I feel happy I feel happy...'),
      Shape(
        geometry=Text(string=["Happy"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(0.129412,1,0.019608)))),
      Shape(
        geometry=Box(size=(2.5,1,0.1)),
        appearance=Appearance(DEF='TransparentAppearance',
          material=Material(transparency=1)))]),
    Transform(translation=(-1.3,0,0),
      children=[
      TouchSensor(DEF='notBadText',description='OK mediocre just plain average no comment'),
      Shape(
        geometry=Text(string=["Average"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.960784,0.019608)))),
      Shape(
        geometry=Box(size=(3,1,0.1)),
        appearance=Appearance(USE='TransparentAppearance'))]),
    Transform(translation=(2.2,0,0),
      children=[
      TouchSensor(DEF='sadText',description='Poor poor pitiful me'),
      Shape(
        geometry=Text(string=["Sad"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(0.180392,0.705882,1)))),
      Shape(
        geometry=Box(size=(2,1,0.1)),
        appearance=Appearance(USE='TransparentAppearance'))]),
    Transform(translation=(5,0,0),
      children=[
      TouchSensor(DEF='badText',description='Look out below!'),
      Shape(
        geometry=Text(string=["Bad"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.019608,0.05098)))),
      Shape(
        geometry=Box(size=(4.5,1,0.1)),
        appearance=Appearance(USE='TransparentAppearance'))]),
    Switch(DEF='display',whichChoice=-1,
      children=[
      Transform(translation=(-5,-3,0),
        children=[
        Shape(DEF='happyimg',
          geometry=Box(),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0.819608,0.156863)),
            texture=ImageTexture(url=["images/nicubunu_Emoticons_Laughing_face.png","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter09EventUtilitiesScripting/images/nicubunu_Emoticons_Laughing_face.png"])))]),
      Transform(translation=(-1.3,-3,0),
        children=[
        Shape(DEF='nbimg',
          geometry=Box(),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0.066667,0.941176)),
            texture=ImageTexture(url=["images/nicubunu_Emoticons_Worried_face.png","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter09EventUtilitiesScripting/images/nicubunu_Emoticons_Worried_face.png"])))]),
      Transform(translation=(2.2,-3,0),
        children=[
        Shape(DEF='sadimg',
          geometry=Box(),
          appearance=Appearance(
            material=Material(diffuseColor=(0.980392,0.968627,0)),
            texture=ImageTexture(url=["images/nicubunu_Emoticons_Crying_face.png","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter09EventUtilitiesScripting/images/nicubunu_Emoticons_Crying_face.png"])))]),
      Transform(translation=(4.7,-3,0),
        children=[
        Shape(DEF='bullimg',
          geometry=Box(),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.101961,0.180392)),
            texture=ImageTexture(url=["images/nicubunu_Emoticons_Devil_face.png","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter09EventUtilitiesScripting/images/nicubunu_Emoticons_Devil_face.png"])))])]),
    IntegerTrigger(DEF='nodisplay'),
    IntegerTrigger(DEF='happydisplay',integerKey=0),
    IntegerTrigger(DEF='nbdisplay',integerKey=1),
    IntegerTrigger(DEF='saddisplay',integerKey=2),
    IntegerTrigger(DEF='bulldisplay',integerKey=3),
    ROUTE(fromField='isActive',fromNode='howFeelText',toField='set_boolean',toNode='nodisplay'),
    ROUTE(fromField='isActive',fromNode='happyText',toField='set_boolean',toNode='happydisplay'),
    ROUTE(fromField='isActive',fromNode='notBadText',toField='set_boolean',toNode='nbdisplay'),
    ROUTE(fromField='isActive',fromNode='sadText',toField='set_boolean',toNode='saddisplay'),
    ROUTE(fromField='isActive',fromNode='badText',toField='set_boolean',toNode='bulldisplay'),
    #  Note that Switch "which choice" has FAN IN 
    ROUTE(fromField='triggerValue',fromNode='nodisplay',toField='whichChoice',toNode='display'),
    ROUTE(fromField='triggerValue',fromNode='happydisplay',toField='whichChoice',toNode='display'),
    ROUTE(fromField='triggerValue',fromNode='nbdisplay',toField='whichChoice',toNode='display'),
    ROUTE(fromField='triggerValue',fromNode='saddisplay',toField='whichChoice',toNode='display'),
    ROUTE(fromField='triggerValue',fromNode='bulldisplay',toField='whichChoice',toNode='display')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MoodSelector.py")
