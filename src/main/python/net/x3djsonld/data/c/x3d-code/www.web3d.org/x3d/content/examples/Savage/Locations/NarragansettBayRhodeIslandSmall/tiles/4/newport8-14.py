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
    GeoLOD(center=(41.57529309331769,-71.20080872015217,0.0),range=2150.0764,child1Url=['../../tiles/5/newport16-28.x3d'],child2Url=['../../tiles/5/newport16-29.x3d'],child3Url=['../../tiles/5/newport17-28.x3d'],child4Url=['../../tiles/5/newport17-29.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-14.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.20887957792968,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=23,zSpacing=7.337143E-4,height=[0,0,2,2,5,7,9,11,12,13,13,13,14,12,10,6,4,1,1,1,1,1,1,1,0,0,1,3,5,7,8,10,12,14,14,14,14,13,11,10,6,2,1,1,1,1,1,1,0,0,1,4,6,7,9,10,12,13,14,15,15,15,14,11,8,2,1,1,1,1,1,1,0,0,0,3,6,7,9,10,12,13,14,15,16,16,15,13,9,3,1,1,1,1,1,1,0,0,0,2,5,7,9,11,12,14,15,16,17,18,18,16,11,4,0,1,1,1,1,1,0,0,0,1,5,6,8,12,14,16,17,18,19,20,22,19,11,5,1,1,1,1,1,1,0,0,0,0,2,5,9,12,14,16,18,20,22,24,25,20,11,6,2,1,1,1,1,1,0,0,0,0,3,6,8,10,12,14,16,18,21,24,22,14,11,8,5,3,2,1,1,1,0,0,0,0,2,4,7,8,9,11,13,15,17,18,14,11,11,10,9,6,5,2,1,1,0,0,0,0,2,7,7,5,5,6,8,10,11,10,10,11,12,13,12,10,8,4,2,1,0,0,0,0,3,6,7,5,5,4,5,8,8,8,8,10,11,12,12,11,9,7,7,7,0,0,0,0,3,4,7,7,6,4,4,5,5,6,6,7,9,10,10,10,10,8,5,4,0,0,0,0,3,6,6,7,6,5,4,3,3,3,3,4,6,7,7,7,7,6,4,3,0,0,0,0,2,5,6,7,6,5,3,3,2,1,1,1,3,3,4,4,3,3,1,1,0,0,0,0,1,4,6,7,6,5,1,1,1,1,1,1,0,1,0,1,1,1,1,1,0,0,0,0,1,2,5,6,4,1,1,1,1,1,2,0,1,1,1,1,1,1,1,1,0,0,0,0,1,1,3,3,2,1,1,1,1,2,1,1,0,1,1,1,1,1,1,1,0,0,0,0,1,2,2,1,1,1,1,1,2,1,1,1,0,0,1,1,1,1,1,1,0,0,0,0,1,2,3,1,1,1,1,1,1,1,1,1,1,0,1,1,2,6,4,3,0,0,0,0,0,2,3,1,1,1,0,1,1,1,1,1,0,0,0,2,5,7,8,8,0,0,0,0,0,2,2,1,1,0,0,0,0,0,0,0,0,1,1,3,5,6,8,9,0,0,0,0,0,1,1,1,0,0,0,1,0,0,0,1,1,1,1,2,2,4,9,11,0,0,0,0,0,1,1,0,0,0,0,1,1,1,1,1,1,1,0,1,2,4,10,11],
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
