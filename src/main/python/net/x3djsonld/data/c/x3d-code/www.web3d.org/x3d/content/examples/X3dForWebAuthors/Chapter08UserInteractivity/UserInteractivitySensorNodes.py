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
    meta(content='UserInteractivitySensorNodes.x3d',name='title'),
    meta(content='A collection of all of the user interactivity sensor nodes: TouchSensor, PlaceSensor, CylinderSensor, SphereSensor, KeySensor, and StringSensor.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='30 April 2005',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Copyright 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='UserInteractivitySensorNodes.png',name='Image'),
    meta(content='UserInteractivitySensorNodesModified.png',name='Image'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter08UserInteractivity/UserInteractivitySensorNodes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='UserInteractivitySensorNodes.x3d'),
    Viewpoint(description='User interactivity sensor nodes',position=(0,0,12)),
    Background(DEF='BackgroundDefault',groundColor=[(0.2,0.4,0.6)],skyColor=[(0.2,0.4,0.6)]),
    Background(DEF='BackgroundTouchCone',skyColor=[(0.5,0.7,0.9)]),
    Transform(translation=(0,4,0),
      children=[
      Shape(
        geometry=Text(string=["Sensor node examples"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=1.5)),
        appearance=Appearance(
          material=Material(DEF='DefaultMaterial',diffuseColor=(0.8,0.6,0.4))))]),
    Transform(translation=(0,1,0),
      children=[
      Transform(translation=(-6,0,0),
        children=[
        TouchSensor(DEF='DefaultTouchSensor',description='click to activate TouchSensor bind alternate Background'),
        Shape(
          geometry=Cone(),
          appearance=Appearance(DEF='RedAppearance',
            material=Material(diffuseColor=(1,0.2,0.2)))),
        Transform(translation=(0,-2,0),
          children=[
          Shape(
            geometry=Text(string=["Touch","Sensor"],
              fontStyle=FontStyle(DEF='JustifyMiddle',justify=["MIDDLE","MIDDLE"])),
            appearance=Appearance(USE='RedAppearance'))]),
        ROUTE(fromField='isActive',fromNode='DefaultTouchSensor',toField='set_bind',toNode='BackgroundTouchCone')]),
      Transform(DEF='TransformBox',translation=(-2,0,0),
        children=[
        PlaneSensor(DEF='DefaultPlaneSensor',description='drag Box to activate PlaneSensor'),
        Shape(
          geometry=Box(),
          appearance=Appearance(DEF='GreenAppearance',
            material=Material(diffuseColor=(0.2,1,0.2)))),
        Transform(translation=(0,-2,0),
          children=[
          Shape(
            geometry=Text(string=["Plane","Sensor"],
              fontStyle=FontStyle(USE='JustifyMiddle')),
            appearance=Appearance(USE='GreenAppearance'))]),
        ROUTE(fromField='offset',fromNode='DefaultPlaneSensor',toField='set_translation',toNode='TransformBox')]),
      Transform(DEF='TransformCylinder',translation=(2,0,0),
        children=[
        CylinderSensor(DEF='DefaultCylinderSensor',description='drag to activate CylinderSensor'),
        Shape(
          geometry=Cylinder(),
          appearance=Appearance(
            texture=ImageTexture(DEF='ReferenceTexture',url=["../Chapter05AppearanceMaterialTextures/ImageTextureFigure18.1X3dSpecification.png","../Chapter05AppearanceMaterialTextures/ImageTextureFigure18.1X3dSpecification.gif","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/ImageTextureFigure18.1X3dSpecification.png","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/ImageTextureFigure18.1X3dSpecification.gif"]),
            material=Material(DEF='DarkBlue',diffuseColor=(0,0,0.9)))),
        Transform(translation=(0,-2,0),
          children=[
          Shape(
            geometry=Text(string=["Cylinder","Sensor"],
              fontStyle=FontStyle(USE='JustifyMiddle')),
            appearance=Appearance(
              material=Material(USE='DarkBlue')))]),
        ROUTE(fromField='rotation_changed',fromNode='DefaultCylinderSensor',toField='set_rotation',toNode='TransformCylinder')]),
      Transform(DEF='TransformSphere',translation=(6,0,0),
        children=[
        SphereSensor(DEF='DefaultSphereSensor',description='click to activate SphereSensor'),
        Shape(
          geometry=Sphere(),
          appearance=Appearance(
            texture=ImageTexture(USE='ReferenceTexture'))),
        Transform(DEF='SphereSensorText',translation=(0,-2,0),
          children=[
          Shape(
            geometry=Text(string=["Sphere","Sensor"],
              fontStyle=FontStyle(USE='JustifyMiddle')),
            appearance=Appearance(
              material=Material(DEF='GreyMaterial')))]),
        ROUTE(fromField='rotation_changed',fromNode='DefaultSphereSensor',toField='set_rotation',toNode='TransformSphere')])]),
    Group(
      children=[
      Transform(translation=(-4,-3,0),
        children=[
        Shape(
          geometry=Text(DEF='KeyText',string=["?"],
            fontStyle=FontStyle(USE='JustifyMiddle')),
          appearance=Appearance(DEF='LightBrownAppearance',
            material=Material(diffuseColor=(1,0.862745,0.141176))))]),
      Transform(translation=(-2,-3,0),
        children=[
        Shape(
          geometry=Text(DEF='StringText',string=["Press keys then <Enter>"],
            fontStyle=FontStyle(justify=["BEGIN","MIDDLE"])),
          appearance=Appearance(USE='LightBrownAppearance'))]),
      KeySensor(DEF='DefaultKeySensor'),
      StringSensor(DEF='DefaultStringSensor'),
      Script(DEF='KeyboardProcessor',
        field=[
        field(accessType='inputOnly',name='keyInput',type='SFString'),
        field(accessType='inputOnly',name='finalTextInput',type='SFString'),
        field(accessType='inputOnly',name='enteredTextInput',type='SFString'),
        field(accessType='outputOnly',name='keyOutput',type='MFString'),
        field(accessType='outputOnly',name='stringOutput',type='MFString')]),
      ROUTE(fromField='keyPress',fromNode='DefaultKeySensor',toField='keyInput',toNode='KeyboardProcessor'),
      ROUTE(fromField='finalText',fromNode='DefaultStringSensor',toField='finalTextInput',toNode='KeyboardProcessor'),
      ROUTE(fromField='enteredText',fromNode='DefaultStringSensor',toField='enteredTextInput',toNode='KeyboardProcessor'),
      ROUTE(fromField='keyOutput',fromNode='KeyboardProcessor',toField='string',toNode='KeyText'),
      ROUTE(fromField='stringOutput',fromNode='KeyboardProcessor',toField='string',toNode='StringText')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for UserInteractivitySensorNodes.py")
