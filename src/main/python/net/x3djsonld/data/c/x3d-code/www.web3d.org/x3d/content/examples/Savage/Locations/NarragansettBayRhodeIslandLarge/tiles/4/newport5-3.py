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
    GeoLOD(center=(41.37958958474797,-71.63732336849614,0.0),range=6150.5674,child1Url=['../../tiles/5/newport10-6.x3d'],child2Url=['../../tiles/5/newport10-7.x3d'],child3Url=['../../tiles/5/newport11-6.x3d'],child4Url=['../../tiles/5/newport11-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport5-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.35539950857997,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,1,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,3,0,0,4,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,3,4,0,0,0,0,0,0,0,0,0,0,1,7,3,0,0,0,0,0,11,10,10,1,0,0,0,1,0,0,0,0,7,5,3,4,1,0,1,0,0,0,10,8,10,0,0,0,0,0,3,6,0,5,8,7,2,2,3,5,0,0,0,0,9,4,11,11,5,2,0,0,5,7,6,7,8,8,8,6,5,4,2,1,0,0,11,10,7,5,3,0,0,0,5,8,8,9,4,8,9,8,6,4,4,2,1,1,15,11,7,2,1,0,0,0,6,7,8,10,5,6,9,8,7,5,4,4,1,1,13,11,6,4,1,5,2,2,4,5,3,6,5,5,10,8,8,7,6,4,2,1,12,10,4,1,9,8,7,9,3,4,4,3,3,5,11,11,9,10,7,4,4,4,24,19,22,15,12,9,6,6,4,5,4,4,7,10,13,12,12,11,10,6,7,7,25,30,23,23,22,12,13,14,10,5,4,4,4,14,15,16,15,14,15,12,12,12,14,29,27,32,28,30,25,31,25,19,15,10,6,13,18,19,20,22,21,18,19,18,26,32,29,32,32,36,32,34,26,23,19,16,20,24,22,22,23,24,27,27,26,24,19,24,27,26,30,36,36,37,36,31,26,20,29,25,24,26,38,41,35,36,40,40,18,23,26,25,30,36,36,37,37,32,26,22,29,25,24,27,40,43,36,38,41,41],
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
