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
    GeoLOD(center=(41.57529309331769,-71.18466700459715,0.0),range=2150.0764,child1Url=['../../tiles/5/newport16-30.x3d'],child2Url=['../../tiles/5/newport16-31.x3d'],child3Url=['../../tiles/5/newport17-30.x3d'],child4Url=['../../tiles/5/newport17-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=23,zSpacing=7.337143E-4,height=[1,1,1,1,1,1,1,3,6,7,8,9,11,10,9,10,13,15,18,19,20,21,22,1,1,1,1,1,1,1,2,5,7,9,10,11,9,9,11,12,14,16,18,19,19,21,1,1,1,1,1,1,0,3,6,9,12,12,11,8,8,10,12,12,13,15,16,18,20,1,1,1,1,1,0,0,2,6,10,14,16,11,8,7,9,10,11,12,14,15,17,19,1,1,1,1,1,1,1,1,5,8,10,11,9,7,8,8,10,11,12,14,17,20,21,1,1,1,1,1,1,1,1,1,2,4,5,6,6,7,8,10,14,16,17,20,21,22,1,1,1,1,1,1,1,1,1,2,3,4,4,5,5,6,8,12,15,17,20,21,23,1,1,1,1,1,1,0,1,2,3,4,5,5,5,4,5,6,10,13,16,19,20,22,1,1,1,1,1,1,1,3,4,6,7,6,6,6,5,5,7,8,11,14,16,18,20,1,2,2,2,4,5,4,6,8,9,8,7,6,6,6,6,7,8,10,13,15,17,20,7,7,7,5,8,8,5,8,9,9,8,7,6,7,7,7,7,8,10,13,16,20,21,4,1,4,9,12,10,11,10,11,9,8,6,7,7,7,8,8,8,9,13,17,20,21,3,1,1,4,8,9,13,13,11,9,7,6,7,8,8,8,10,10,10,12,15,18,20,1,1,1,1,4,7,12,13,10,8,7,7,7,8,9,11,12,13,12,11,14,15,18,1,1,1,1,3,7,12,13,10,7,7,7,7,9,11,11,13,14,16,16,14,15,16,1,1,1,1,2,7,12,12,9,7,7,7,8,9,11,11,13,14,17,18,17,17,16,1,1,1,2,3,6,9,9,7,7,7,8,9,11,13,15,15,15,16,19,19,18,18,1,1,3,7,8,8,7,8,9,8,7,8,11,14,15,16,17,18,19,20,20,20,19,3,4,7,11,11,11,10,10,10,9,7,9,12,15,18,19,20,21,22,22,21,20,20,8,8,11,13,13,13,13,12,10,9,8,10,12,16,20,22,23,25,27,25,24,22,22,9,11,14,13,14,15,15,14,11,9,9,11,14,18,22,24,25,28,30,28,26,24,24,11,16,15,14,15,17,17,15,12,9,9,11,14,19,22,25,27,31,29,27,26,25,27,11,16,15,14,15,18,17,15,11,9,9,11,14,19,22,24,28,30,28,27,26,26,28],
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
