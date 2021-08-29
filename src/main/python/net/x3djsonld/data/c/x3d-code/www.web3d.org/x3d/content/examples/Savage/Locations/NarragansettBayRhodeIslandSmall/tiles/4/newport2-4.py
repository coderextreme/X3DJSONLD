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
    GeoLOD(center=(41.478442799987555,-71.36222587570239,0.0),range=2150.0764,child1Url=['../../tiles/5/newport4-8.x3d'],child2Url=['../../tiles/5/newport4-9.x3d'],child3Url=['../../tiles/5/newport5-8.x3d'],child4Url=['../../tiles/5/newport5-9.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport2-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47037194221004,-71.3702967334799,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,11,12,1,0,0,0,0,0,1,7,1,0,0,0,0,0,3,6,5,4,9,12,15,21,14,4,0,0,1,1,0,0,3,4,0,0,0,0,0,15,17,21,24,19,17,17,21,14,8,6,0,0,7,1,0,3,0,0,0,0,0,0,25,25,27,29,26,24,21,20,17,11,9,6,2,3,5,8,11,1,0,5,7,0,0,30,29,29,31,30,28,24,19,17,13,11,9,8,6,5,9,12,4,5,8,7,0,0,30,29,29,29,30,30,26,21,17,15,13,12,13,9,5,7,10,1,0,6,1,0,0,30,27,27,26,27,29,28,24,21,16,15,17,14,7,4,1,0,0,0,0,0,0,0,30,28,26,24,24,26,26,25,25,20,17,15,9,4,0,0,0,0,0,0,0,0,0,29,29,26,22,22,22,22,23,25,21,17,14,6,2,0,0,0,0,0,0,0,0,0,26,27,25,23,20,19,17,17,19,17,15,12,7,4,0,0,0,0,0,0,0,0,0,25,26,25,22,18,16,13,12,11,10,9,7,5,3,0,0,0,0,0,0,0,0,0,24,25,25,22,19,14,9,7,6,5,4,4,4,3,0,0,0,0,0,0,0,0,0,24,25,25,23,19,14,9,6,5,4,4,4,5,3,0,0,0,0,0,0,0,0,0],
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
