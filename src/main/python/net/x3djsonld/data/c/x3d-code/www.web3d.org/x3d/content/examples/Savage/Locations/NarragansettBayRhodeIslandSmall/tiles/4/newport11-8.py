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
    GeoLOD(center=(41.62371823998276,-71.2976590134823,0.0),range=2150.0764,child1Url=['../../tiles/5/newport22-16.x3d'],child2Url=['../../tiles/5/newport22-17.x3d'],child3Url=['../../tiles/5/newport23-16.x3d'],child4Url=['../../tiles/5/newport23-17.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-8.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.615647382205246,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[28,22,17,12,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,21,18,10,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,20,16,11,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,23,20,13,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,24,15,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,24,15,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,20,13,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,17,11,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,15,12,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,15,7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,12,8,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,8,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
