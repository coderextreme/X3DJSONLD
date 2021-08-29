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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='GridXZ_20x20Movable.x3d',name='title'),
    meta(content='MV4204 class',name='creator'),
    meta(content='22 November 2000',name='created'),
    meta(content='30 March 2016',name='modified'),
    meta(content='Line grid authoring tool for precise measurement in 3D space: drag plane to move along Y axis, click numbers to hide grid. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m.',name='description'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Movable.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Viewpoint above X axis, rotated left and oriented down to face center 
    children=[
    Viewpoint(description='XZ grid (0 10 25 relative)',orientation=(1,0,0,-0.4),position=(0,10,25)),
    Transform(center=(25,10,0),rotation=(0,1,0,1.57079),
      children=[
      Viewpoint(description='XZ grid (25 10 0 relative)',orientation=(1,0,0,-0.4),position=(25,10,0))]),
    Transform(DEF='GridLocation',
      children=[
      Group(
        children=[
        TouchSensor(DEF='TextLabelTouchSensor',description='select and hold to hide grid'),
        Transform(translation=(0,-0.5,0),
          children=[
          Billboard(
            children=[
            Shape(
              geometry=Text(DEF='CenterText',string=["origin"],
                fontStyle=FontStyle(DEF='LABEL_FONT',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=.4)),
              appearance=Appearance(DEF='DefaultAppearance',
                material=Material(),))])]),
        Transform(translation=(10,-0.5,10),
          children=[
          Billboard(
            children=[
            Shape(
              geometry=Text(DEF='SouthEastText',string=["10 0 10"],
                fontStyle=FontStyle(USE='LABEL_FONT')),
              appearance=Appearance(USE='DefaultAppearance'))])]),
        Transform(translation=(10,-0.5,-10),
          children=[
          Billboard(
            children=[
            Shape(
              geometry=Text(DEF='NorthEastText',string=["10 0 -10"],
                fontStyle=FontStyle(USE='LABEL_FONT')),
              appearance=Appearance(USE='DefaultAppearance'))])]),
        Transform(translation=(-10,-0.5,-10),
          children=[
          Billboard(
            children=[
            Shape(
              geometry=Text(DEF='NorthWestText',string=["-10 0 -10"],
                fontStyle=FontStyle(USE='LABEL_FONT')),
              appearance=Appearance(USE='DefaultAppearance'))])]),
        Transform(translation=(-10,-0.5,10),
          children=[
          Billboard(
            children=[
            Shape(
              geometry=Text(DEF='SouthWestText',string=["-10 0 10"],
                fontStyle=FontStyle(USE='LABEL_FONT')),
              appearance=Appearance(USE='DefaultAppearance'))])])]),
      Switch(DEF='GridOnOffSwitch',whichChoice=0,
        children=[
        Group(
          children=[
          PlaneSensor(DEF='GridSensor',description='click and drag to move grid'),
          Script(DEF='LineSensorAxisY',
            field=[
            field(accessType='inputOnly',name='set_translation',type='SFVec3f'),
            field(accessType='outputOnly',name='translation_changed',type='SFVec3f')]),
          Shape(DEF='LinesAlignedAlongZ',
            geometry=IndexedLineSet(colorIndex=[1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1],colorPerVertex=False,coordIndex=[1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1],
              coord=Coordinate(DEF='EndPoints',point=[(0,0,0),(-10,0,10),(-9,0,10),(-8,0,10),(-7,0,10),(-6,0,10),(-5,0,10),(-4,0,10),(-3,0,10),(-2,0,10),(-1,0,10),(0,0,10),(1,0,10),(2,0,10),(3,0,10),(4,0,10),(5,0,10),(6,0,10),(7,0,10),(8,0,10),(9,0,10),(10,0,10),(-10,0,-10),(-9,0,-10),(-8,0,-10),(-7,0,-10),(-6,0,-10),(-5,0,-10),(-4,0,-10),(-3,0,-10),(-2,0,-10),(-1,0,-10),(0,0,-10),(1,0,-10),(2,0,-10),(3,0,-10),(4,0,-10),(5,0,-10),(6,0,-10),(7,0,-10),(8,0,-10),(9,0,-10),(10,0,-10)]),
              color=Color(color=[(0.4,0.4,0.4),(0.8,0.2,0),(0.4,0.1,0.05)]))),
          Transform(DEF='LinesAlignedAlongX',rotation=(0,1,0,1.57079),
            children=[
            Shape(USE='LinesAlignedAlongZ')]),
          Transform(translation=(10.5,0,0),
            children=[
            Billboard(
              children=[
              Shape(
                geometry=Text(string=["X"],
                  fontStyle=FontStyle(USE='LABEL_FONT')),
                appearance=Appearance(DEF='LABEL_APPEARANCE',
                  material=Material(diffuseColor=(1,1,.3),emissiveColor=(.33,.33,.1))))])]),
          Transform(translation=(0,0,10.5),
            children=[
            Billboard(
              children=[
              Shape(
                geometry=Text(string=["Z"],
                  fontStyle=FontStyle(USE='LABEL_FONT')),
                appearance=Appearance(USE='LABEL_APPEARANCE'))])])])])]),
    Script(DEF='CenterTextScript',
      field=[
      field(accessType='inputOnly',name='set_translation',type='SFVec3f'),
      field(accessType='outputOnly',name='value',type='MFString')]),
    Script(DEF='SouthEastTextScript',
      field=[
      field(accessType='inputOnly',name='set_translation',type='SFVec3f'),
      field(accessType='outputOnly',name='value',type='MFString')]),
    Script(DEF='NorthEastTextScript',
      field=[
      field(accessType='inputOnly',name='set_translation',type='SFVec3f'),
      field(accessType='outputOnly',name='value',type='MFString')]),
    Script(DEF='NorthWestTextScript',
      field=[
      field(accessType='inputOnly',name='set_translation',type='SFVec3f'),
      field(accessType='outputOnly',name='value',type='MFString')]),
    Script(DEF='SouthWestTextScript',
      field=[
      field(accessType='inputOnly',name='set_translation',type='SFVec3f'),
      field(accessType='outputOnly',name='value',type='MFString')]),
    Script(DEF='SwitchTextOnOffScript',
      field=[
      field(accessType='inputOnly',name='isTouched',type='SFBool'),
      field(accessType='outputOnly',name='touchChoice',type='SFInt32')]),
    ROUTE(fromField='translation_changed',fromNode='GridSensor',toField='set_translation',toNode='LineSensorAxisY'),
    #  Send changed position to text-construction scripts 
    ROUTE(fromField='translation_changed',fromNode='LineSensorAxisY',toField='set_translation',toNode='GridLocation'),
    ROUTE(fromField='translation_changed',fromNode='LineSensorAxisY',toField='set_translation',toNode='CenterTextScript'),
    ROUTE(fromField='translation_changed',fromNode='LineSensorAxisY',toField='set_translation',toNode='SouthEastTextScript'),
    ROUTE(fromField='translation_changed',fromNode='LineSensorAxisY',toField='set_translation',toNode='NorthEastTextScript'),
    ROUTE(fromField='translation_changed',fromNode='LineSensorAxisY',toField='set_translation',toNode='NorthWestTextScript'),
    ROUTE(fromField='translation_changed',fromNode='LineSensorAxisY',toField='set_translation',toNode='SouthWestTextScript'),
    #  Send text showing changed position to output Text nodes 
    ROUTE(fromField='value',fromNode='CenterTextScript',toField='string',toNode='CenterText'),
    ROUTE(fromField='value',fromNode='SouthEastTextScript',toField='string',toNode='SouthEastText'),
    ROUTE(fromField='value',fromNode='NorthEastTextScript',toField='string',toNode='NorthEastText'),
    ROUTE(fromField='value',fromNode='NorthWestTextScript',toField='string',toNode='NorthWestText'),
    ROUTE(fromField='value',fromNode='SouthWestTextScript',toField='string',toNode='SouthWestText'),
    #  Enable/disable grid visibility based on user touching coordinate labels 
    ROUTE(fromField='isActive',fromNode='TextLabelTouchSensor',toField='isTouched',toNode='SwitchTextOnOffScript'),
    ROUTE(fromField='touchChoice',fromNode='SwitchTextOnOffScript',toField='whichChoice',toNode='GridOnOffSwitch')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GridXZ_20x20Movable.py")
