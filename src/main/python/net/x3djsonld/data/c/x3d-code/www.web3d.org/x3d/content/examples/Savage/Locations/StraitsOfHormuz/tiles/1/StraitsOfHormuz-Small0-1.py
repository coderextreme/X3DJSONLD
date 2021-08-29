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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_1_01',geoSystem=['GDC'],position=(25.8972799768378,56.93416835294592,116654.7662347948),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(25.8972799768378,56.93416835294592,0.0),range=139985.72,child1Url=['../../tiles/2/StraitsOfHormuz-Small0-2.x3d'],child2Url=['../../tiles/2/StraitsOfHormuz-Small0-3.x3d'],child3Url=['../../tiles/2/StraitsOfHormuz-Small1-2.x3d'],child4Url=['../../tiles/2/StraitsOfHormuz-Small1-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/1/StraitsOfHormuz-Small0-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(25.4489002189,56.33160427093061,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.057387054,zDimension=22,zSpacing=0.042702835,height=[86,0,0,0,0,0,0,2,2,2,0,1,1,2,3,5,1,0,1,3,1,2,165,1,1,0,0,2,2,2,2,0,3,2,0,2,2,0,3,1,1,3,0,0,29,0,1,0,1,2,1,2,1,0,2,2,2,1,3,0,1,1,1,0,2,2,215,0,0,2,3,2,0,2,2,2,2,1,2,3,0,1,0,2,2,0,4,2,2,3,6,4,3,3,1,0,2,2,1,7,3,0,4,0,6,0,4,3,0,1,1,4,0,0,4,3,0,2,0,1,2,1,0,0,0,4,0,0,2,1,1,1,1,-1,6,7,0,0,1,0,0,1,3,4,0,0,-1,0,11,-1,15,6,1,0,244,5,5,6,4,-3,2,0,0,-1,-3,0,0,4,3,0,-6,0,0,0,1,1,416,3,4,8,-2,2,2,0,0,0,0,-1,1,2,8,1,0,2,9,4,6,43,485,15,-3,11,0,6,1,-1,-1,0,-2,0,8,0,0,0,21,6,20,17,18,19,513,409,-2,-3,5,4,0,-1,0,-1,1,3,-1,0,2,0,0,38,26,79,66,47,1098,174,37,2,0,-1,-5,0,0,1,0,2,0,2,3,8,5,45,40,76,59,57,1017,753,-6,-1,0,-3,-2,0,1,-1,-1,-1,0,-2,2,4,14,60,54,151,255,208,257,24,-4,1,-4,-2,0,1,3,-2,0,0,0,1,2,4,24,55,114,278,314,244,134,616,535,-1,-3,2,0,-1,-4,1,0,2,0,1,0,6,32,45,85,182,259,237,138,0,-6,-6,-1,-2,-9,-6,0,9,0,2,0,2,0,7,25,50,75,252,381,356,15,92,18,2,-3,-4,0,0,-9,3,1,-15,3,0,0,1,127,67,148,293,386,377,99,20,24,-4,-4,-1,-2,-1,0,8,8,0,1,0,0,8,68,86,147,307,711,1020,555,394,-1,-3,-5,-4,0,-4,-4,-3,0,1,-1,3,1,10,55,95,213,371,646,675,3,411,-4,-6,-3,-1,0,0,3,-1,0,3,1,2,4,16,53,66,147,326,823,817,2,134,0,4,0,0,-1,0,3,-8,1,3,1,3,8,20,40,49,162,465,1072,1067,2,140,3,1,0,0,-2,1,2,-7,1,2,3,3,8,20,38,49,165,459,1066,1068],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
