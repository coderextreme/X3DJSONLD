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
    GeoLOD(center=(41.6560016710928,-71.36222587570239,0.0),range=2150.0764,child1Url=['../../tiles/5/newport26-8.x3d'],child2Url=['../../tiles/5/newport26-9.x3d'],child3Url=['../../tiles/5/newport27-8.x3d'],child4Url=['../../tiles/5/newport27-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport13-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64793081331529,-71.3702967334799,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,7,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,10,11,11,12,8,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,14,13,13,13,9,6,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,13,16,14,15,13,7,5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,17,19,15,16,13,6,7,4,0,0,0,0,0,0,0,0,0,0,0,0,0,5,16,18,19,17,13,11,7,7,5,2,0,0,0,0,0,0,0,0,0,0,0,1,13,16,16,17,15,11,12,7,7,6,2,1,0,0,0,0,0,0,0,0,0,0,3,15,17,17,18,14,13,11,10,6,6,3,2,2,0,0,0,0,0,0,0,0,0,3,14,16,16,16,15,16,15,12,12,6,5,5,5,0,0,0,0,0,0,0,0,0,12,13,15,16,15,18,17,15,13,13,10,6,4,2,0,0,0,0,0,0,0,0,4,16,14,15,15,17,18,18,13,12,12,12,11,7,7,0,0,0,0,0,0,0,8,11,12,12,14,15,14,16,16,15,14,12,12,10,8,7,0,0,0,0,0,0,0,5,7,7,8,8,10,11,13,13,14,14,11,8,7,6,1,0,0,0,0,0,0,0,5,6,5,6,5,8,11,12,13,13,13,10,7,6,5,1],
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
