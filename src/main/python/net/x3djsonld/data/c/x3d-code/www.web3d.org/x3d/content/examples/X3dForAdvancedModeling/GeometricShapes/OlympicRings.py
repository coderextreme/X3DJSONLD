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
    meta(content='OlympicRings.x3d',name='title'),
    meta(content='Olympic Rings built for authoring course MV3204 using regulation colors, each approximately 5m radius. Debugging efforts showed difficulties with concave crossSection, important to set convex=false for proper rendering.',name='description'),
    meta(content='Tobias Brennenstuhl',name='creator'),
    meta(content='10 December 2019',name='created'),
    meta(content='13 April 2020',name='modified'),
    meta(content='CircleCalculator.xlsx',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Olympic_symbols',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Olympic_symbols#/media/File:Olympic_rings_without_rims.svg',name='drawing'),
    meta(content='OlympicRings.FreeWRL.png',name='Image'),
    meta(content='OlympicRings.H3dViewer.png',name='Image'),
    meta(content='OlympicRings.InstantReality.png',name='Image'),
    meta(content='OlympicRings.Octaga.png',name='Image'),
    meta(content='OlympicRings.view3dScene.png',name='Image'),
    meta(content='OlympicRings.XJ3dBrowser.png',name='Image'),
    meta(content='OlympicRingsBlender.blend',name='reference'),
    meta(content='OlympicRingsBlender.png',name='reference'),
    meta(content='OlympicRingsBlender.original.txt',name='reference'),
    meta(content='OlympicRingsBlender.x3d',name='reference'),
    meta(content='ExtrusionCrossSectionSelfIntersectingView3dsceneVisualization.mp4',name='reference'),
    meta(content='https://twitter.com/Web3DConsortium/status/1245370306417418240',name='reference'),
    meta(content='Olympic Rings',name='subject'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://gitlab.nps.edu/Savage/mv3204x3dforwebauthors/blob/master/assignments/DirectedStudy/Tobias/Scenes/OlympicRings.x3d',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/OlympicRings.x3d',name='identifier'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='OlympicRings.x3d'),
    NavigationInfo(headlight=False),
    PointLight(DEF='PointLight',location=(0,0,45)),
    Viewpoint(DEF='OlympicRingsFromInFront',description='Regulation color Olympic Rings',position=(0,0,45)),
    Background(skyColor=[(0.2,0.2,0.2)]),
    Transform(DEF='AllRings',translation=(0,2,0),
      children=[
      Transform(rotation=(1,0,0,1.6),translation=(-11,2.5,0.1),
        children=[
        Shape(
          geometry=Extrusion(DEF='RingExtrusion',convex=False,crossSection=[(4.924039,0.868241),(4.698463,1.710101),(4.330127,2.5),(3.830222,3.213938),(3.213938,3.830222),(2.5,4.330127),(1.710101,4.698463),(0.868241,4.924039),(0,5),(-0.868241,4.924039),(-1.710101,4.698463),(-2.5,4.330127),(-3.213938,3.830222),(-3.830222,3.213938),(-4.330127,2.5),(-4.698463,1.710101),(-4.924039,0.868241),(-5,0),(-4.924039,-0.868241),(-4.698463,-1.710101),(-4.330127,-2.5),(-3.830222,-3.213938),(-3.213938,-3.830222),(-2.5,-4.330127),(-1.710101,-4.698463),(-0.868241,-4.924039),(-0,-5),(0.868241,-4.924039),(1.710101,-4.698463),(2.5,-4.330127),(3.213938,-3.830222),(3.830222,-3.213938),(4.330127,-2.5),(4.698463,-1.710101),(4.924039,-0.868241),(5,-0),(4.5,0),(4.431635,-0.781417),(4.228617,-1.539091),(3.897114,-2.25),(3.4472,-2.892544),(2.892544,-3.4472),(2.25,-3.897114),(1.539091,-4.228617),(0.781417,-4.431635),(-0,-4.5),(-0.781417,-4.431635),(-1.539091,-4.228617),(-2.25,-3.897114),(-2.892544,-3.4472),(-3.4472,-2.892544),(-3.897114,-2.25),(-4.228617,-1.539091),(-4.431635,-0.781417),(-4.5,0),(-4.431635,0.781417),(-4.228617,1.539091),(-3.897114,2.25),(-3.4472,2.892544),(-2.892544,3.4472),(-2.25,3.897114),(-1.539091,4.228617),(-0.781417,4.431635),(0,4.5),(0.781417,4.431635),(1.539091,4.228617),(2.25,3.897114),(2.892544,3.4472),(3.4472,2.892544),(3.897114,2.25),(4.228617,1.539091),(4.431635,0.781417),(4.5,0),(5,0),(4.924039,0.868241)],solid=False,
            #  spine is open, crossSection is closed 
            ),
          appearance=Appearance(
            material=Material(DEF='StrongBlue',diffuseColor=(0.003922,0.52549,0.768627))))]),
      Transform(rotation=(1,0,0,1.54),translation=(0,2.5,-0.1),
        children=[
        Shape(
          geometry=Extrusion(USE='RingExtrusion'),
          appearance=Appearance(
            material=Material(DEF='SolidBlack',diffuseColor=(0,0,0))))]),
      Transform(rotation=(1,0,0,1.50),translation=(11,2.5,-0.21),
        children=[
        Shape(
          geometry=Extrusion(USE='RingExtrusion'),
          appearance=Appearance(
            material=Material(DEF='StrongRed',diffuseColor=(0.933333333,0.188235294,0.298039216))))]),
      Transform(rotation=(1,0,0,1.57),translation=(-5.5,-3,0),
        children=[
        Shape(
          geometry=Extrusion(USE='RingExtrusion'),
          appearance=Appearance(
            material=Material(DEF='MustardYellow',diffuseColor=(0.984313725,0.701960784,0.184313725))))]),
      Transform(rotation=(1,0,0,1.52),translation=(5.5,-3,0.1),
        children=[
        Shape(
          geometry=Extrusion(USE='RingExtrusion'),
          appearance=Appearance(
            material=Material(DEF='OlympicGreen',diffuseColor=(0.082352941,0.549019608,0.223529412))))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for OlympicRings.py")
