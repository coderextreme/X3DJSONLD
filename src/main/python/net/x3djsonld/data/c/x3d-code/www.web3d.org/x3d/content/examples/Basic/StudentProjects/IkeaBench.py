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
    meta(content='IkeaBench.x3d',name='title'),
    meta(content='X3D example Model of an Ikea Bench',name='description'),
    meta(content='3 March 2004',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Vaughn Pangelinan',name='creator'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/IkeaBench.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='IkeaBench.x3d'),
    Transform(
      children=[
      Group(DEF='IkeaBench',
        children=[
        Shape(
          geometry=Box(size=(.7,.02,.3)),
          appearance=Appearance(DEF='Yellow',
            material=Material(diffuseColor=(.8,.8,0)))),
        Transform(translation=(.33,-.16,.13),
          children=[
          Shape(DEF='BenchFrontLeg',
            geometry=Box(size=(.034,.3,.034)),
            appearance=Appearance(DEF='Red',
              material=Material(diffuseColor=(0.75,0,0))))]),
        Transform(translation=(-.33,-.16,.13),
          children=[
          Shape(USE='BenchFrontLeg')]),
        Transform(translation=(-.325,.04,-.16),
          children=[
          Shape(DEF='BenchRearLeg',
            geometry=Box(size=(.05,.7,.02)),
            appearance=Appearance(USE='Red'))]),
        Transform(translation=(.325,.04,-.16),
          children=[
          Shape(USE='BenchRearLeg')]),
        Transform(translation=(0,-.038,.13),
          children=[
          Shape(DEF='FrontBenchBeam',
            geometry=Box(size=(.626,.056,.02)),
            appearance=Appearance(USE='Red'))]),
        Transform(translation=(0,-.185,0),
          children=[
          Shape(DEF='LowCenterBenchBeam',
            geometry=Box(size=(.64,.05,.02)),
            appearance=Appearance(USE='Red'))]),
        Transform(translation=(.33,-.038,-.01),
          children=[
          Shape(DEF='HighShortBenchBeam',
            geometry=Box(size=(.02,.056,.28)),
            appearance=Appearance(USE='Red'))]),
        Transform(translation=(-.33,-.038,-.01),
          children=[
          Shape(USE='HighShortBenchBeam')]),
        Transform(translation=(.33,-.185,-.01),
          children=[
          Shape(DEF='LowShortBenchBeam',
            geometry=Box(size=(.02,.05,.28)),
            appearance=Appearance(USE='Red'))]),
        Transform(translation=(-.33,-.185,-.01),
          children=[
          Shape(USE='LowShortBenchBeam')]),
        Transform(DEF='LowerBenchBackBeamTranslation',translation=(0,.13,-.16),
          children=[
          Shape(DEF='BenchBackBeam',
            geometry=Box(size=(.6,.05,.016)),
            appearance=Appearance(USE='Red'))]),
        Transform(translation=(0,.36,-.16),
          children=[
          Shape(USE='BenchBackBeam')]),
        Transform(DEF='BenchBackUprightBeamTranslation',translation=(0,.245,-.16),
          children=[
          Shape(DEF='BenchBackUprightBeam',
            geometry=Box(size=(.05,.18,.014)),
            appearance=Appearance(USE='Red'))]),
        Transform(translation=(.25,.245,-.16),
          children=[
          Shape(USE='BenchBackUprightBeam')]),
        Transform(translation=(-.25,.245,-.16),
          children=[
          Shape(USE='BenchBackUprightBeam')]),
        Transform(scale=(.2,.18,1),translation=(.125,.245,-.16),
          children=[
          Group(DEF='DoggyBackPiece',
            children=[
            Shape(
              appearance=Appearance(
                texture=ImageTexture(url=["DoggyTransparent.png","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/DoggyTransparent.png"])),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3],solid=False,
                coord=Coordinate(point=[(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0),(-0.5,0.5,0)])))])]),
        Transform(scale=(.2,.18,1),translation=(-.125,.245,-.16),
          children=[
          Group(DEF='KittyBackPiece',
            children=[
            Shape(
              appearance=Appearance(
                texture=ImageTexture(url=["KittyTransparent.png","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/KittyTransparent.png"])),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3],solid=False,
                coord=Coordinate(point=[(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0),(-0.5,0.5,0)])))])]),
        Transform(rotation=(1,0,0,.45),
          children=[
          Viewpoint(DEF='BenchView',description='From Bench',fieldOfView=1.4,orientation=(0,1,0,3.14),position=(0,.5,-.9))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for IkeaBench.py")
