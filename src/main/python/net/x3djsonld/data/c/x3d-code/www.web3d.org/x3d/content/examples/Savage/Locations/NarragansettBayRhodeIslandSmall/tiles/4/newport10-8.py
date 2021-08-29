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
    GeoLOD(center=(41.607576524427735,-71.2976590134823,0.0),range=2150.0764,child1Url=['../../tiles/5/newport20-16.x3d'],child2Url=['../../tiles/5/newport20-17.x3d'],child3Url=['../../tiles/5/newport21-16.x3d'],child4Url=['../../tiles/5/newport21-17.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-8.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,17,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,16,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,20,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,21,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,22,22,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,21,15,9,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,25,18,9,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,27,16,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,29,17,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,27,17,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,27,15,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,25,13,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,27,24,16,10,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,22,17,11,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,22,17,13,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,22,17,12,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
