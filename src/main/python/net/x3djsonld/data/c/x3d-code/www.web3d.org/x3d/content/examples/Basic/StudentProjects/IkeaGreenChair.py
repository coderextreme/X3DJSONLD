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
    meta(content='IkeaGreenChair.x3d',name='title'),
    meta(content='X3D example Model of an Ikea Green Chair',name='description'),
    meta(content='3 March 2004',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Vaughn Pangelinan',name='creator'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaGreenChair.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='IkeaGreenChair.x3d'),
    Transform(
      children=[
      Group(DEF='IkeaGreenChair',
        children=[
        Transform(rotation=(1,0,0,.45),
          children=[
          Viewpoint(DEF='GreenChair',description='View Green Chair',fieldOfView=1.4,orientation=(0,1,0,3.14),position=(0,.5,-.9))]),
        Shape(
          geometry=Box(size=(.3,.02,.3)),
          appearance=Appearance(DEF='Blue',
            material=Material(diffuseColor=(0,0,.8)))),
        Transform(translation=(.13,-.16,.13),
          children=[
          Shape(DEF='GreenChairFrontLeg',
            geometry=Box(size=(.034,.3,.034)),
            appearance=Appearance(DEF='Green',
              material=Material(diffuseColor=(0,.6,0))))]),
        Transform(translation=(-.13,-.16,.13),
          children=[
          Shape(USE='GreenChairFrontLeg')]),
        Transform(translation=(-.125,.04,-.16),
          children=[
          Shape(DEF='GreenChairRearLeg',
            geometry=Box(size=(.05,.7,.02)),
            appearance=Appearance(USE='Green'))]),
        Transform(translation=(.125,.04,-.16),
          children=[
          Shape(USE='GreenChairRearLeg')]),
        Transform(translation=(0,-.038,.13),
          children=[
          Shape(DEF='GreenFrontChairBeam',
            geometry=Box(size=(.226,.056,.02)),
            appearance=Appearance(USE='Green'))]),
        Transform(translation=(0,-.185,0),
          children=[
          Shape(DEF='GreenLowCenterBeam',
            geometry=Box(size=(.24,.05,.02)),
            appearance=Appearance(USE='Green'))]),
        Transform(translation=(.13,-.038,-.01),
          children=[
          Shape(DEF='GreenHighShortBeam',
            geometry=Box(size=(.02,.056,.28)),
            appearance=Appearance(USE='Green'))]),
        Transform(translation=(-.13,-.038,-.01),
          children=[
          Shape(USE='GreenHighShortBeam')]),
        Transform(translation=(.13,-.185,-.01),
          children=[
          Shape(DEF='GreenLowShortBeam',
            geometry=Box(size=(.02,.05,.28)),
            appearance=Appearance(USE='Green'))]),
        Transform(translation=(-.13,-.185,-.01),
          children=[
          Shape(USE='GreenLowShortBeam')]),
        Transform(DEF='GreenLowerBackBeamTranslation',translation=(0,.13,-.16),
          children=[
          Shape(DEF='GreenBackBeam',
            geometry=Box(size=(.2,.05,.016)),
            appearance=Appearance(USE='Green'))]),
        Transform(translation=(0,.36,-.16),
          children=[
          Shape(USE='GreenBackBeam')]),
        Transform(scale=(.2,.18,1),translation=(0,.245,-.16),
          children=[
          Group(DEF='KittyBackPiece',
            children=[
            Shape(
              appearance=Appearance(
                texture=ImageTexture(url=["KittyTransparent.png","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/KittyTransparent.png"])),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3],solid=False,
                coord=Coordinate(point=[(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0),(-0.5,0.5,0)])))])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for IkeaGreenChair.py")
