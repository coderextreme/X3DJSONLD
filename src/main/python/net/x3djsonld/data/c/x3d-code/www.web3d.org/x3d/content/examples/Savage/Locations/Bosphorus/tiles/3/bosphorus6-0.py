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
    GeoViewpoint(description='GeoViewpoint_3_60',geoSystem=['GDC'],position=(41.33559074013499,28.511681591246088,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.33559074013499,28.511681591246088,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus12-0.x3d'],child2Url=['../../tiles/4/bosphorus12-1.x3d'],child3Url=['../../tiles/4/bosphorus13-0.x3d'],child4Url=['../../tiles/4/bosphorus13-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus6-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.280922627855375,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[220,216,240,173,156,123,105,88,50,63,90,48,93,129,144,145,122,136,121,110,174,176,170,181,133,125,109,88,82,76,47,78,100,87,60,92,140,154,80,74,84,71,127,147,124,138,131,94,80,76,59,50,65,71,123,130,89,102,119,141,80,39,71,109,77,96,103,101,120,113,88,80,78,82,93,101,123,89,144,121,122,122,82,47,35,93,26,29,108,76,97,141,111,134,82,121,106,57,80,63,67,62,120,112,117,34,57,85,28,51,119,67,90,99,145,162,128,89,64,77,35,67,48,89,125,54,81,37,39,40,29,42,95,58,94,98,121,105,105,85,51,72,36,29,73,71,59,87,43,71,7,9,63,76,74,46,84,97,125,130,66,79,75,21,12,68,69,39,67,70,45,69,21,22,68,72,80,51,63,147,122,81,126,78,39,58,16,42,20,20,89,38,12,60,18,17,9,4,49,35,63,124,86,88,121,82,75,49,41,11,10,32,86,56,36,52,17,5,8,13,64,53,32,112,108,49,111,57,36,32,31,46,7,7,67,50,37,35,6,1,18,21,90,47,64,110,54,35,55,95,76,41,61,42,29,6,73,25,18,4,0,10,40,21,95,40,78,64,80,25,47,58,120,59,78,93,38,-5,16,38,0,1,22,30,67,64,39,36,20,67,36,26,48,90,115,60,53,46,50,19,4,2,8,-4,-2,26,16,42,87,47,19,64,25,52,45,49,71,79,48,51,50,22,7,11,7,0,2,6,5,0,102,54,17,69,22,27,73,103,108,86,53,14,13,23,27,44,14,4,4,5,5,3,91,97,14,58,18,19,39,104,61,114,86,19,38,62,62,47,14,0,1,2,2,4,27,43,20,44,12,36,88,112,49,85,60,17,72,86,48,34,8,4,0,4,4,3,61,8,35,23,10,37,55,68,95,46,26,46,71,81,76,61,32,2,3,0,4,5,18,6,19,9,11,30,57,52,68,110,80,95,53,39,48,53,35,14,3,0,9,11,8,7,8,4,24,57,86,49,44,59,74,49,57,7,12,26,22,4,3,9,13,12,8,6,8,4,24,60,88,55,39,59,76,49,61,5,11,16,20,4,1,9,13,12],
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
