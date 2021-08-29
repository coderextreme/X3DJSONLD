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
    meta(content='MfdScreen.x3d',name='title'),
    meta(content='MultiFunctionDisplay (MFD) screen that is inlined to create the cockpit console of a helicopter',name='description'),
    meta(content='Doug Miller (original creator), Jane Wu (adapted from the original mfd.wrl created for vrtp demo helicopter)',name='creator'),
    meta(content='19 February 1999',name='created'),
    meta(content='1 January 2019',name='modified'),
    meta(content='Del Beilstein',name='contributor'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/MfdScreen.x3d',name='identifier'),
    meta(content='T62.jpg',name='reference'),
    meta(content='M1Abrams.jpg',name='reference'),
    meta(content='MfdScreen.jpg',name='reference'),
    meta(content='50cal.wav',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Close-up view of Multi-FunctionDisplay',position=(0,0,0.3)),
    Group(
      children=[
      Shape(
        appearance=Appearance(DEF='GRAY',
          material=Material(diffuseColor=(0.2,0.2,0.2))),
        geometry=Box(size=(0.26,0.21,0.05))),
      Transform(translation=(0.00,0.00,0.03),
        children=[
        Switch(DEF='MFD_SCREEN',whichChoice=3,
          children=[
          Shape(
            appearance=Appearance(
              material=Material(DEF='GREEN_COLOR',diffuseColor=(0.0,1.0,0.0))),
            geometry=IndexedFaceSet(DEF='MFD_GEOMETRY',coordIndex=[0,1,2,3,-1],
              coord=Coordinate(point=[(-0.09,-0.07,0.01),(0.09,-0.07,0.01),(0.09,0.07,0.01),(-0.09,0.07,0.01)]))),
          Shape(
            appearance=Appearance(
              material=Material(USE='GREEN_COLOR'),
              texture=ImageTexture(url=["T62.jpg","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/T62.jpg"])),
            geometry=IndexedFaceSet(USE='MFD_GEOMETRY')),
          Shape(
            appearance=Appearance(
              material=Material(USE='GREEN_COLOR'),
              texture=ImageTexture(url=["M1Abrams.jpg","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/M1Abrams.jpg"])),
            geometry=IndexedFaceSet(USE='MFD_GEOMETRY')),
          Shape(
            appearance=Appearance(
              material=Material(USE='GREEN_COLOR'),
              texture=ImageTexture(url=["MfdScreen.jpg","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/MfdScreen.jpg"])),
            geometry=IndexedFaceSet(USE='MFD_GEOMETRY'))])]),
      Switch(DEF='FIFTY_CAL_SOUND',whichChoice=0,
        children=[
        Sound(
          source=AudioClip(description='50 caliber gun',loop=True,url=["50cal.wav","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/50cal.wav"]))]),
      Transform(translation=(-0.11,-0.05,0.025),
        children=[
        Shape(DEF='BUTTON',
          appearance=Appearance(DEF='OFF_WHITE',
            material=Material(diffuseColor=(0.75,0.75,0.75))),
          geometry=Box(size=(0.02,0.02,0.01)))]),
      Transform(translation=(-0.11,-0.015,0.025),
        children=[
        Shape(USE='BUTTON')]),
      Transform(translation=(-0.11,0.02,0.025),
        children=[
        Shape(USE='BUTTON')]),
      Transform(translation=(-0.11,0.055,0.025),
        children=[
        Shape(USE='BUTTON')]),
      Transform(translation=(0.11,-0.05,0.025),
        children=[
        Shape(USE='BUTTON')]),
      Transform(translation=(0.11,-0.015,0.025),
        children=[
        Shape(USE='BUTTON')]),
      Transform(translation=(0.11,0.02,0.025),
        children=[
        Shape(USE='BUTTON'),
        TouchSensor(DEF='RIGHT_BUTTON2',description='touch to activate')]),
      Transform(translation=(0.11,0.055,0.025),
        children=[
        Shape(USE='BUTTON'),
        TouchSensor(DEF='RIGHT_BUTTON1',description='touch to activate')]),
      Transform(translation=(-0.065,-0.09,0.025),
        children=[
        Shape(USE='BUTTON')]),
      Transform(translation=(-0.035,-0.09,0.025),
        children=[
        Shape(USE='BUTTON')]),
      Transform(translation=(0.035,-0.09,0.025),
        children=[
        Shape(USE='BUTTON')]),
      Transform(translation=(0.065,-0.09,0.025),
        children=[
        Shape(USE='BUTTON')]),
      Transform(rotation=(1.0,0.0,0.0,1.57),translation=(-0.11,-0.085,0.025),
        children=[
        Shape(DEF='KNOB',
          appearance=Appearance(
            material=Material(USE='GREEN_COLOR')),
          geometry=Cylinder(height=0.02,radius=0.0125))]),
      Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.11,-0.085,0.025),
        children=[
        Shape(USE='KNOB')])]),
    Script(DEF='CycleSelector',
      field=[
      field(accessType='initializeOnly',name='value',type='SFInt32',value=0),
      field(accessType='inputOnly',name='set_boolean',type='SFBool'),
      field(accessType='outputOnly',name='value_changed',type='SFInt32')]),
    Script(DEF='FiftyCalOnOffToggle',
      field=[
      field(accessType='initializeOnly',name='value',type='SFBool',value=False),
      field(accessType='inputOnly',name='set_boolean',type='SFBool'),
      field(accessType='outputOnly',name='value_changed',type='SFInt32')]),
    #  Cycle selectors routes 
    ROUTE(fromField='isActive',fromNode='RIGHT_BUTTON1',toField='set_boolean',toNode='CycleSelector'),
    ROUTE(fromField='value_changed',fromNode='CycleSelector',toField='set_whichChoice',toNode='MFD_SCREEN'),
    #  50Cal Routes 
    ROUTE(fromField='isActive',fromNode='RIGHT_BUTTON2',toField='set_boolean',toNode='FiftyCalOnOffToggle'),
    ROUTE(fromField='value_changed',fromNode='FiftyCalOnOffToggle',toField='set_whichChoice',toNode='FIFTY_CAL_SOUND')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MfdScreen.py")
