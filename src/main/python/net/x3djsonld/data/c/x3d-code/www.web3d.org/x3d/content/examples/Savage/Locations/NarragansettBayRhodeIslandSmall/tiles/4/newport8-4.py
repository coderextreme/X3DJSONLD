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
    GeoLOD(center=(41.57529309331769,-71.36222587570239,0.0),range=2150.0764,child1Url=['../../tiles/5/newport16-8.x3d'],child2Url=['../../tiles/5/newport16-9.x3d'],child3Url=['../../tiles/5/newport17-8.x3d'],child4Url=['../../tiles/5/newport17-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.3702967334799,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=23,zSpacing=7.337143E-4,height=[26,24,22,22,20,18,16,17,15,13,8,1,0,0,0,0,0,0,0,0,0,0,0,27,22,20,21,23,18,21,19,14,12,9,0,0,0,0,0,0,0,0,0,0,0,0,26,24,22,22,19,18,18,19,14,12,11,0,0,0,0,0,0,0,0,0,0,0,0,25,23,21,24,21,21,24,20,13,11,8,0,0,0,0,0,0,0,0,0,0,0,0,23,25,23,22,22,24,19,18,17,11,9,0,0,0,0,0,0,0,0,0,0,0,0,24,25,24,22,19,21,20,20,19,16,8,0,0,0,0,0,0,0,0,0,0,0,0,22,21,22,24,20,19,21,16,13,11,3,0,0,0,0,0,0,0,0,0,0,0,0,23,25,23,19,21,20,16,15,12,7,0,0,0,0,0,0,0,0,0,0,0,0,0,22,21,19,20,17,17,15,11,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,16,16,14,15,13,9,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,12,12,12,10,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,5,2,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
