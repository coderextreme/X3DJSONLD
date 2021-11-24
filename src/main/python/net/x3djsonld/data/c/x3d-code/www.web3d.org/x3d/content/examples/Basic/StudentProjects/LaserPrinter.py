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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='LaserPrinter.x3d',name='title'),
    meta(content='Harold W. Valentine',name='creator'),
    meta(content='22 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='How a laser printer works',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/LaserPrinter.x3d',name='identifier'),
    meta(content='BottomFuserRoller.jpg',name='Image'),
    meta(content='PaperRoller.gif',name='Image'),
    meta(content='PaperRoller.jpg',name='Image'),
    meta(content='ReverseText.jpg',name='Image'),
    meta(content='Text.jpg',name='Image'),
    meta(content='TopFuser.jpg',name='Image'),
    meta(content='TopFuserRoller.gif',name='Image'),
    meta(content='chargeroller.jpg',name='Image'),
    meta(content='chipset.jpg',name='Image'),
    meta(content='mirror.jpg',name='Image'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='LaserPrinter.x3d'),
    Viewpoint(description='LaserPrinter',orientation=(-0.590284,0.769274,0.244504,0.987861),position=(10,10,10)),
    Group(
      children=[
      Transform(rotation=(0,0,1,1.57079),translation=(0,-0.85,-3.75),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,1))),
          geometry=Cylinder(height=6,radius=.03))]),
      Transform(translation=(0,0.05,0),
        children=[
        Transform(rotation=(0,0,1,1.57079),translation=(-3,0,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.3,0.3,0.3),shininess=0.6,specularColor=(1,1,1))),
            geometry=Cylinder(height=.1))]),
        Transform(rotation=(0,0,1,1.57079),translation=(3,0,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.3,0.3,0.3),shininess=0.6,specularColor=(1,1,1))),
            geometry=Cylinder(height=.1))])]),
      Transform(rotation=(0,0,1,1.57079),translation=(0,.1,-1.75),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.5,0.5))),
          geometry=Box(size=(.75,6,.75)))]),
      Group(
        children=[
        TimeSensor(DEF='ChargeRollerTimer',cycleInterval=10,loop=True),
        OrientationInterpolator(DEF='ChargeRollerOr',key=[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1],keyValue=[(0,1,0,6.283185307),(0,1,0,5.497787144),(0,1,0,4.71238898),(0,1,0,3.926990817),(0,1,0,3.141592654),(0,1,0,2.35619449),(0,1,0,1.570796327),(0,1,0,0.7854163),(0,1,0,0)])]),
      Transform(rotation=(0,0,1,1.57079),translation=(0,0.1,-1.25),
        children=[
        Transform(DEF='ChargeRoller',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.5,0.5,1)),
              texture=ImageTexture(url=["chargeroller.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/chargeroller.jpg"])),
            geometry=Cylinder(height=6,radius=.25))])]),
      Transform(rotation=(0,0,1,1.57079),translation=(0,-0.215,-1.25),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.6,0.25,0.25))),
          geometry=Box(size=(.12,6,.25)))]),
      Group(
        children=[
        TimeSensor(DEF='TopFuserTimer',cycleInterval=10,loop=True),
        OrientationInterpolator(DEF='TopFuserOr',key=[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1],keyValue=[(0,1,0,0),(0,1,0,0.7854163),(0,1,0,1.570796327),(0,1,0,2.35619449),(0,1,0,3.141592654),(0,1,0,3.926990817),(0,1,0,4.71238898),(0,1,0,5.497787144),(0,1,0,6.283185307)])]),
      Transform(rotation=(0,0,1,1.57079),translation=(0,-.68,3),
        children=[
        Transform(DEF='TopFuser',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0,1,1)),
              texture=ImageTexture(url=["TopFuserRoller.gif","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/TopFuserRoller.jpg"])),
            geometry=Cylinder(height=6,radius=.25))])]),
      Group(
        children=[
        TimeSensor(DEF='BottomFuserTimer',cycleInterval=10,loop=True),
        OrientationInterpolator(DEF='BottomFuserOr',key=[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1],keyValue=[(0,1,0,6.283185307),(0,1,0,5.497787144),(0,1,0,4.71238898),(0,1,0,3.926990817),(0,1,0,3.141592654),(0,1,0,2.35619449),(0,1,0,1.570796327),(0,1,0,0.7854163),(0,1,0,0)])]),
      Transform(rotation=(0,0,1,1.57079),translation=(0,-1.2,3),
        children=[
        Transform(DEF='BottomFuser',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0,1,1)),
              texture=ImageTexture(url=["BottomFuserRoller.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/BottomFuserRoller.jpg"])),
            geometry=Cylinder(height=6,radius=.25))])]),
      Group(
        children=[
        TimeSensor(DEF='TopPaperTimer',cycleInterval=10,loop=True),
        OrientationInterpolator(DEF='TopPaperOr',key=[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1],keyValue=[(0,1,0,0),(0,1,0,0.7854163),(0,1,0,1.570796327),(0,1,0,2.35619449),(0,1,0,3.141592654),(0,1,0,3.926990817),(0,1,0,4.71238898),(0,1,0,5.497787144),(0,1,0,6.283185307)])]),
      Transform(rotation=(0,0,1,1.57079),translation=(0,-0.68,-3),
        children=[
        Transform(DEF='TopPaper',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),
              texture=ImageTexture(DEF='paperroller',url=["PaperRoller.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/PaperRoller.jpg"])),
            geometry=Cylinder(height=6,radius=.25))])]),
      Group(
        children=[
        TimeSensor(DEF='BottomPaperTimer',cycleInterval=10,loop=True),
        OrientationInterpolator(DEF='BottomPaperOr',key=[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1],keyValue=[(0,1,0,6.283185307),(0,1,0,5.497787144),(0,1,0,4.71238898),(0,1,0,3.926990817),(0,1,0,3.141592654),(0,1,0,2.35619449),(0,1,0,1.570796327),(0,1,0,0.7854163),(0,1,0,0)])]),
      Transform(rotation=(0,0,1,1.57079),translation=(0,-1.2,-3),
        children=[
        Transform(DEF='BottomPaper',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,0)),
              texture=ImageTexture(USE='paperroller')),
            geometry=Cylinder(height=6,radius=.25))])]),
      Transform(rotation=(0,0,1,1.57079),translation=(0,-.94,3),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,1)),
            texture=ImageTexture(url=["Text.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/Text.jpg"])),
          geometry=Box(size=(.02,6,8)))]),
      Transform(rotation=(0,0,1,1.57079),translation=(0,-.94,-3.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,1))),
          geometry=Box(size=(.02,6,2)))]),
      Transform(rotation=(0,0,1,1.57079),translation=(0,2,-3.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,1))),
          geometry=Box(size=(.5,1.5,2)))]),
      Group(
        children=[
        TimeSensor(DEF='MirrorTimer',cycleInterval=0.1,loop=True),
        OrientationInterpolator(DEF='MirrorOr',key=[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1],keyValue=[(0,1,0,6.283185307),(0,1,0,5.497787144),(0,1,0,4.71238898),(0,1,0,3.926990817),(0,1,0,3.141592654),(0,1,0,2.35619449),(0,1,0,1.570796327),(0,1,0,0.7854163),(0,1,0,0)])]),
      Transform(DEF='Mirror',translation=(0,2,2),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(.5,.5,.5)),
            texture=ImageTexture(url=["mirror.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/mirror.jpg"])),
          geometry=Cylinder(height=.5,radius=.5))]),
      Transform(rotation=(1,0,0,1.57079),translation=(0,2,-1),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='Red',diffuseColor=(1,0,0))),
          geometry=Cylinder(height=6,radius=.04))]),
      Transform(rotation=(1,0,0,.6),scale=(1,1,.01),translation=(0,1.352,1.0825),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='Red')),
          geometry=Cone(bottomRadius=3,height=1.48))]),
      Transform(translation=(0,0,-4.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='Green',diffuseColor=(.2,1,0))),
          geometry=Box(size=(10,5,.2)))]),
      Transform(rotation=(0,1,0,1.57079),translation=(-4.9,0,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,1,0))),
          geometry=Box(size=(9,5,.2)))]),
      Transform(rotation=(0,1,0,1.57079),translation=(-4.7,0,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='DarkGreen',diffuseColor=(0,.5,0)),
            texture=ImageTexture(url=["chipset.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/chipset.jpg"])),
          geometry=Box(size=(7,3,.2)))]),
      Group(
        children=[
        TimeSensor(DEF='PrinterDrumTimer',cycleInterval=10,loop=True),
        OrientationInterpolator(DEF='PrinterDrumOr',key=[0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1],keyValue=[(1,0,0,6.283185307),(1,0,0,5.497787144),(1,0,0,4.71238898),(1,0,0,3.926990817),(1,0,0,3.141592654),(1,0,0,2.35619449),(1,0,0,1.570796327),(1,0,0,0.7854163),(1,0,0,0)])]),
      Transform(DEF='PrinterDrum',translation=(0,0.05,0),
        children=[
        Transform(rotation=(0,0,1,1.57079),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(DEF='DrumColor',diffuseColor=(1,1,1),shininess=0.6,specularColor=(1,1,1)),
              texture=ImageTexture(url=["ReverseText.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/ReverseText.jpg"])),
            geometry=Cylinder(height=6))])])]),
    ROUTE(fromField='fraction_changed',fromNode='PrinterDrumTimer',toField='set_fraction',toNode='PrinterDrumOr'),
    ROUTE(fromField='value_changed',fromNode='PrinterDrumOr',toField='rotation',toNode='PrinterDrum'),
    ROUTE(fromField='fraction_changed',fromNode='MirrorTimer',toField='set_fraction',toNode='MirrorOr'),
    ROUTE(fromField='value_changed',fromNode='MirrorOr',toField='rotation',toNode='Mirror'),
    ROUTE(fromField='fraction_changed',fromNode='ChargeRollerTimer',toField='set_fraction',toNode='ChargeRollerOr'),
    ROUTE(fromField='value_changed',fromNode='ChargeRollerOr',toField='rotation',toNode='ChargeRoller'),
    ROUTE(fromField='fraction_changed',fromNode='TopFuserTimer',toField='set_fraction',toNode='TopFuserOr'),
    ROUTE(fromField='value_changed',fromNode='TopFuserOr',toField='rotation',toNode='TopFuser'),
    ROUTE(fromField='fraction_changed',fromNode='BottomFuserTimer',toField='set_fraction',toNode='BottomFuserOr'),
    ROUTE(fromField='value_changed',fromNode='BottomFuserOr',toField='rotation',toNode='BottomFuser'),
    ROUTE(fromField='fraction_changed',fromNode='TopPaperTimer',toField='set_fraction',toNode='TopPaperOr'),
    ROUTE(fromField='value_changed',fromNode='TopPaperOr',toField='rotation',toNode='TopPaper'),
    ROUTE(fromField='fraction_changed',fromNode='BottomPaperTimer',toField='set_fraction',toNode='BottomPaperOr'),
    ROUTE(fromField='value_changed',fromNode='BottomPaperOr',toField='rotation',toNode='BottomPaper')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LaserPrinter.py")
