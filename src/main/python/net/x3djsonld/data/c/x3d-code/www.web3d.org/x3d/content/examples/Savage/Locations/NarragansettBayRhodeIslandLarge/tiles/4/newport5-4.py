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
    GeoLOD(center=(41.37958958474797,-71.59335266040932,0.0),range=6150.5674,child1Url=['../../tiles/5/newport10-8.x3d'],child2Url=['../../tiles/5/newport10-9.x3d'],child3Url=['../../tiles/5/newport11-8.x3d'],child4Url=['../../tiles/5/newport11-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport5-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.35539950857997,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,4,4,2,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,4,10,10,5,0,0,0,0,0,2,0,0,0,0,0,0,0,0,1,1,0,7,14,18,11,5,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,2,1,9,18,15,6,4,5,2,0,0,0,0,3,2,0,0,1,0,0,0,0,0,2,9,12,8,8,6,6,7,1,0,0,1,2,1,1,1,1,0,0,0,0,1,3,1,4,5,5,6,6,5,3,0,2,2,4,1,0,1,1,0,0,0,2,2,3,3,0,3,7,8,7,4,2,4,5,4,4,3,2,2,4,2,0,4,3,6,6,3,5,4,6,6,8,9,7,6,8,7,5,4,4,4,7,7,6,8,5,7,6,6,6,5,6,12,14,11,9,10,6,9,9,8,6,5,12,11,11,10,9,10,6,8,8,8,7,10,16,17,11,11,12,7,12,9,9,10,18,16,12,12,15,10,14,8,8,10,10,10,18,21,16,19,17,12,12,12,12,12,24,19,19,19,18,15,16,16,9,8,16,18,24,24,23,27,23,22,18,17,16,16,40,33,25,25,23,22,24,22,20,20,19,28,29,32,32,34,29,26,21,20,19,19,41,36,26,25,23,24,25,22,20,21,19,29,29,33,32,34,30,27,22,20,20,20],
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
