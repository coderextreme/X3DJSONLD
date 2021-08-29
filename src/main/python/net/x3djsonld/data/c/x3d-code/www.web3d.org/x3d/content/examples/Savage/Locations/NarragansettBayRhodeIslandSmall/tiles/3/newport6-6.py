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
    GeoLOD(center=(41.64793081331529,-71.2250212934847,0.0),range=4300.153,child1Url=['../../tiles/4/newport12-12.x3d'],child2Url=['../../tiles/4/newport12-13.x3d'],child3Url=['../../tiles/4/newport13-12.x3d'],child4Url=['../../tiles/4/newport13-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport6-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=24,zSpacing=0.0014036275,height=[3,1,1,1,1,1,2,2,3,4,1,0,0,0,1,5,0,0,0,0,1,7,19,21,3,1,2,1,1,1,1,1,1,2,1,1,0,1,1,1,2,0,0,0,0,5,17,20,4,2,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,14,18,5,4,2,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,1,1,1,1,11,15,3,4,3,1,1,1,1,1,1,1,1,1,1,2,1,1,2,1,1,1,1,1,11,15,2,3,4,5,3,1,1,1,1,1,1,1,1,1,1,2,5,1,1,1,1,1,12,16,1,1,1,2,2,3,3,1,3,1,1,1,1,1,1,2,2,1,1,1,1,1,11,15,1,2,3,1,2,3,3,3,2,1,1,1,1,1,3,2,4,1,1,1,1,1,11,14,1,1,1,1,2,3,3,4,5,3,2,2,2,3,3,5,5,2,1,1,1,1,9,13,1,1,1,1,1,1,1,4,5,5,4,4,2,2,4,3,9,6,1,1,1,1,8,11,1,1,1,1,1,1,1,1,4,6,7,8,8,7,1,5,8,3,1,1,1,1,5,5,1,1,1,1,1,1,1,1,2,4,6,6,6,7,8,8,2,1,1,1,1,1,4,6,1,1,1,1,1,1,1,1,1,2,2,3,4,3,5,8,6,1,1,1,1,1,1,5,1,1,1,1,1,1,1,1,1,1,1,1,1,2,5,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,7,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1],
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
