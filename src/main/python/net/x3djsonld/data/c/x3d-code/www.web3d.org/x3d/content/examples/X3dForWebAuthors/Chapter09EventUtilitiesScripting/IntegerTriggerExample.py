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
    meta(content='IntegerTriggerExample.x3d',name='title'),
    meta(content='An IntegerTrigger node controls the display of colored text.',name='description'),
    meta(content='Don Brutzman and Leonard Daly',name='creator'),
    meta(content='1 March 2008',name='created'),
    meta(content='14 June 2020',name='modified'),
    meta(content='KelpTank.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter09EventUtilitiesScripting/IntegerTriggerExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='IntegerTrigger.x3d'),
    Background(skyColor=[(1,1,1)]),
    Viewpoint(description='Select text to change color',position=(0,0,6)),
    Switch(DEF='SwitchColoredTextGroups',whichChoice=0,
      children=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0))),
          geometry=Text(DEF='MessageText',string=["Select these words","to change color"],
            fontStyle=FontStyle(justify=["MIDDLE","BEGIN"]))),
        #  TransparentBox makes selection of Text using TouchSensor easier for user 
        Shape(DEF='TransparentBox',
          geometry=Box(size=(6,2,0.02)),
          appearance=Appearance(
            material=Material(transparency=1))),
        TouchSensor(DEF='Touch1',description='touch to activate')]),
      #  Reuse Text geoemetry, paired with different Material colors 
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,1,1))),
          geometry=Text(USE='MessageText')),
        Shape(USE='TransparentBox'),
        TouchSensor(DEF='Touch2',description='touch to activate')]),
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.7,0.7,0))),
          geometry=Text(USE='MessageText')),
        Shape(USE='TransparentBox'),
        TouchSensor(DEF='Touch3',description='touch to activate')])]),
    #  IntegerTrigger nodes used to switch child shapes, must use separate one for each output value 
    IntegerTrigger(DEF='Filter1',integerKey=1),
    IntegerTrigger(DEF='Filter2',integerKey=2),
    IntegerTrigger(DEF='Filter3',integerKey=0),
    ROUTE(fromField='isActive',fromNode='Touch1',toField='set_boolean',toNode='Filter1'),
    ROUTE(fromField='isActive',fromNode='Touch2',toField='set_boolean',toNode='Filter2'),
    ROUTE(fromField='isActive',fromNode='Touch3',toField='set_boolean',toNode='Filter3'),
    ROUTE(fromField='triggerValue',fromNode='Filter1',toField='whichChoice',toNode='SwitchColoredTextGroups'),
    ROUTE(fromField='triggerValue',fromNode='Filter2',toField='whichChoice',toNode='SwitchColoredTextGroups'),
    ROUTE(fromField='triggerValue',fromNode='Filter3',toField='whichChoice',toNode='SwitchColoredTextGroups')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for IntegerTriggerExample.py")
