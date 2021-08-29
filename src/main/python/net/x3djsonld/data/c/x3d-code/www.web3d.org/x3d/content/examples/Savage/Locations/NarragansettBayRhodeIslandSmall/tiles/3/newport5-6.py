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
    GeoLOD(center=(41.615647382205246,-71.2250212934847,0.0),range=4300.153,child1Url=['../../tiles/4/newport10-12.x3d'],child2Url=['../../tiles/4/newport10-13.x3d'],child3Url=['../../tiles/4/newport11-12.x3d'],child4Url=['../../tiles/4/newport11-13.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport5-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=0.0014036275,zDimension=21,zSpacing=0.0016141715,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,8,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,12,15,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,18,19,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,19,21,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,18,18,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,2,0,0,0,0,7,14,13,7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,10,9,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,2,8,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,9,2,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,12,9,2,0,1,1,2,1,1,2,2,2,3,3,2,1,0,0,0,0,0,0,4,17,18,6,1,0,1,2,3,3,3,4,4,1,1,0,0,2,2,0,0,0,1,2,7,18,20,3,1,1,1,1,2,2,2,3,4,1,0,0,0,1,5,0,0,0,0,1,7,19,21,3,1,1,1,1,1,2,2,3,4,1,0,0,0,1,5,0,0,0,0,1,7,19,21],
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
