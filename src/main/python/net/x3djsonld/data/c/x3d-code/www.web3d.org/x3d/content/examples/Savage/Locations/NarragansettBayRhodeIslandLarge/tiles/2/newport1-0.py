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
    GeoLOD(center=(41.403779660915966,-71.70327943062637,0.0),range=24602.27,child1Url=['../../tiles/3/newport2-0.x3d'],child2Url=['../../tiles/3/newport2-1.x3d'],child3Url=['../../tiles/3/newport3-0.x3d'],child4Url=['../../tiles/3/newport3-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.30701935624398,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.008375373,zDimension=22,zSpacing=0.009215267,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,13,23,15,21,21,20,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,16,26,25,20,17,38,47,41,20,4,8,0,0,0,0,0,0,0,0,0,0,0,12,9,14,13,15,41,40,48,41,35,43,25,4,4,3,2,0,0,0,2,0,0,10,12,15,15,27,61,47,49,44,30,28,26,23,19,13,10,-1,0,3,1,0,0,8,21,12,14,48,48,52,40,39,21,11,14,11,13,33,10,2,0,6,7,4,1,34,14,18,13,22,45,31,36,50,42,11,20,11,47,19,14,29,30,8,19,17,17,17,37,21,15,18,19,16,16,11,11,18,37,46,35,16,17,23,33,25,38,46,54,23,41,49,16,24,19,33,17,24,58,48,67,42,16,16,32,51,28,31,48,51,48,12,15,17,22,33,24,33,26,36,45,48,28,32,16,16,20,43,43,27,31,37,40,20,20,57,17,27,40,73,38,16,20,36,13,15,17,21,22,42,41,27,28,43,49,16,47,59,29,47,73,65,30,15,18,18,21,19,22,48,53,42,50,37,29,53,68,28,55,64,38,36,64,51,29,33,28,19,23,22,15,26,29,38,16,26,30,28,34,65,48,44,45,56,62,70,56,35,19,26,29,25,30,22,20,17,52,70,30,37,27,61,56,74,71,59,76,83,52,22,31,27,51,28,39,18,22,38,43,51,30,38,30,80,82,120,100,78,59,36,24,28,25,18,58,27,45,26,27,68,42,38,38,35,35,107,118,114,79,51,31,39,41,34,19,38,58,51,25,25,40,50,41,43,31,38,36,102,123,71,72,45,38,82,82,39,26,29,57,61,33,35,32,53,79,47,39,47,57,101,122,70,71,45,38,83,83,40,27,29,55,60,33,35,33,55,78,47,40,48,58],
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
