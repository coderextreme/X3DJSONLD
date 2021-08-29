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
    GeoLOD(center=(41.47037194221004,-71.33801330236986,0.0),range=8600.306,child1Url=['../../tiles/3/newport0-2.x3d'],child2Url=['../../tiles/3/newport0-3.x3d'],child3Url=['../../tiles/3/newport1-2.x3d'],child4Url=['../../tiles/3/newport1-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport0-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.4380885111,-71.3702967334799,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=0.0029348573,zDimension=23,zSpacing=0.0029348573,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,8,3,1,0,1,0,0,0,0,0,0,0,0,0,9,0,0,0,0,0,0,8,13,11,4,2,13,2,2,0,7,0,0,0,6,0,0,9,10,10,0,0,0,0,8,17,11,8,2,10,10,13,0,4,0,0,0,2,7,0,5,11,12,0,0,0,7,14,15,14,12,2,2,23,27,8,0,0,15,0,10,1,0,8,11,11,0,0,0,0,5,11,12,8,2,2,12,16,24,18,0,8,3,8,14,1,8,17,17,0,0,0,0,0,0,12,9,12,10,4,15,17,21,13,18,15,11,10,5,12,15,15,0,0,0,0,0,0,0,0,11,20,4,0,0,7,15,14,18,4,2,10,15,18,18,0,0,0,0,0,0,0,0,0,6,9,0,0,0,0,4,15,2,2,5,16,19,19,2,11,0,0,0,0,0,0,0,0,6,6,0,0,0,0,0,0,0,11,18,21,22,29,30,14,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,14,22,20,20,26,18,15,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,25,17,17,24,21,2,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,2,18,28,24,24,21,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,11,22,26,26,17,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,8,13,16,16,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,4,13,15,16,17,17,17,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,3,9,13,25,22,22,19,14,7,1,0,0,0,0,0,0,0,0,0,0,0,0,4,8,3,6,18,27,27,19,15,7,4,0,0,0,0,0,0,0,0,0,0,0,0,3,8,3,6,17,27,27],
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
