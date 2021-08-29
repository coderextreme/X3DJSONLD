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
    GeoLOD(center=(41.49458451554258,-71.18466700459715,0.0),range=2150.0764,child1Url=['../../tiles/5/newport6-30.x3d'],child2Url=['../../tiles/5/newport6-31.x3d'],child3Url=['../../tiles/5/newport7-30.x3d'],child4Url=['../../tiles/5/newport7-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport3-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.486513657765066,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,0,0,0,0,2,2,2,3,3,3,4,4,4,4,5,5,6,6,5,5,6,0,0,0,0,1,2,3,3,3,3,3,3,4,4,4,5,5,7,8,9,8,7,6,0,0,0,3,3,4,5,7,6,4,3,4,4,5,5,6,7,9,10,11,8,7,6,0,0,5,7,7,8,8,8,7,5,4,4,5,6,6,8,10,11,12,10,8,6,5,0,7,9,9,10,10,11,8,5,4,5,6,5,6,8,10,12,13,12,10,8,6,5,4,7,8,8,9,10,10,7,6,6,5,5,5,6,9,12,14,14,13,11,8,6,5,5,5,6,7,8,9,9,8,7,8,7,4,4,6,9,13,15,15,13,11,9,7,5,4,4,5,6,8,10,10,9,8,9,8,7,7,8,10,14,16,15,13,11,9,7,5,4,5,6,7,9,10,10,9,10,10,10,11,12,11,12,15,16,15,13,11,9,7,6,6,7,8,9,10,10,10,10,10,11,13,14,14,14,15,16,17,15,13,11,9,8,7,9,9,10,11,12,11,11,11,11,12,14,15,16,17,17,16,15,14,12,11,8,8,8,10,10,11,13,12,12,11,11,12,13,14,16,17,18,18,16,14,13,11,10,8,9,9,9,10,12,12,12,11,11,12,12,13,14,16,18,19,18,15,13,12,11,10,10,10,10,10,10,11,12,11,11,11,12,13,14,15,17,18,19,17,15,14,12,11,11,10,11,11,10,11,11,11,12,13,13,14,14,14,16,18,19,19,18,16,14,13,12,11,12,12,12,12,13,12,13,14,15,15,14,14,16,18,19,20,19,18,16,14,13,12,12,13,13,13,12,14,15,16,17,17,16,15,16,17,19,20,20,19,18,16,14,13,13,14,14,14,12,12,14,16,18,18,18,15,16,17,19,20,21,20,18,17,15,14,14,15,15,15,14,13,12,14,16,18,18,17,16,16,17,18,20,21,20,19,17,15,15,16,17,17,16,15,14,12,13,15,17,17,17,17,16,16,17,19,20,22,20,18,17,17,17,18,17,16,15,15,11,13,14,16,17,17,17,17,16,17,18,19,20,21,20,19,19,18,18,17,16,16,15,12,14,15,16,16,16,16,16,16,17,18,19,20,21,21,21,20,19,19,17,16,15,14,14,15,16,16,16,16,16,16,17,17,17,18,19,20,21,22,21,21,19,18,16,14,14,14,15,16,16,16,16,16,16,17,17,17,18,19,20,21,22,22,21,20,18,16,14,14],
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
