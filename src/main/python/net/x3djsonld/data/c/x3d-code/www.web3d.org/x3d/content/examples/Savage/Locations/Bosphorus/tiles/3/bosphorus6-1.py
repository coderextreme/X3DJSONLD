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
    GeoViewpoint(description='GeoViewpoint_3_61',geoSystem=['GDC'],position=(41.33559074013499,28.660044773738264,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.33559074013499,28.660044773738264,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus12-2.x3d'],child2Url=['../../tiles/4/bosphorus12-3.x3d'],child3Url=['../../tiles/4/bosphorus13-2.x3d'],child4Url=['../../tiles/4/bosphorus13-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus6-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.280922627855375,28.585863182492176,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[176,133,138,131,117,73,59,132,103,89,65,98,102,134,156,122,136,94,112,104,111,109,147,65,123,133,95,95,71,124,96,113,69,93,142,154,159,118,100,102,119,148,123,112,96,42,84,143,113,108,114,77,105,122,92,97,91,87,96,143,116,134,105,151,119,105,29,68,100,97,108,104,124,95,128,111,105,75,75,53,73,92,124,141,119,85,97,81,51,88,43,63,146,99,145,128,83,113,57,32,55,21,36,61,124,90,132,71,27,29,42,66,44,95,74,112,86,82,48,93,66,23,57,14,48,84,84,67,89,69,34,18,76,21,32,40,48,95,58,87,25,74,58,16,44,17,33,37,89,56,59,84,42,19,72,23,13,47,61,49,37,78,23,52,19,28,7,8,22,68,67,59,60,64,31,26,4,4,5,9,22,52,68,71,62,4,6,44,7,41,31,50,39,23,37,63,52,43,13,44,63,53,38,30,49,48,25,11,1,5,12,46,64,35,15,36,46,98,12,23,21,25,25,52,78,67,5,4,9,2,5,13,32,47,17,31,22,63,75,66,49,20,21,33,55,51,33,14,7,11,11,8,11,7,6,4,16,24,42,35,49,85,36,6,64,36,46,43,26,9,8,13,19,19,5,24,25,27,56,69,70,76,44,26,13,8,42,7,30,28,26,0,10,21,29,24,18,48,21,65,85,59,41,25,13,2,1,2,0,4,7,2,13,8,9,20,56,36,28,66,48,55,78,23,16,0,1,-1,-2,0,3,1,4,6,4,5,11,10,42,69,49,67,92,55,14,0,0,0,-1,1,0,-1,4,4,6,5,6,4,9,9,13,51,70,42,8,57,2,-1,-1,0,0,-1,0,0,3,3,8,7,3,2,5,4,3,42,9,0,3,3,4,0,0,0,-2,-1,0,0,5,9,18,6,5,2,1,-1,0,0,-2,0,1,2,-2,0,0,0,0,0,3,-1,11,29,30,9,0,-1,-1,1,-2,1,0,1,0,0,-1,0,1,0,1,0,0,1,12,40,9,1,-2,0,-1,0,0,0,0,0,0,0,-1,-1,0,4,3,0,1,0,12,39,6,0,-2,0,-1,0,-1,0,0,0,0,0,0,0,0,5,3,0,1,0],
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
