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
    GeoLOD(center=(41.486513657765066,-71.38643844903493,0.0),range=4300.153,child1Url=['../../tiles/4/newport2-2.x3d'],child2Url=['../../tiles/4/newport2-3.x3d'],child3Url=['../../tiles/4/newport3-2.x3d'],child4Url=['../../tiles/4/newport3-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47037194221004,-71.40258016458995,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.0016141715,zDimension=21,zSpacing=0.0016141715,height=[0,0,0,0,0,8,12,15,16,14,18,19,18,0,0,0,0,0,0,0,0,0,0,0,0,3,11,17,20,19,17,15,17,12,0,0,0,0,0,0,0,0,0,0,0,0,4,13,21,23,25,21,18,15,6,0,0,0,0,0,0,0,0,0,0,0,0,9,14,22,27,25,23,21,16,0,0,0,0,0,4,4,0,0,0,0,0,0,15,21,25,28,28,26,22,2,0,0,0,0,3,15,0,0,0,0,0,0,0,14,26,28,30,31,27,20,1,0,0,0,1,4,20,17,3,5,0,0,0,0,10,28,31,30,31,32,20,0,0,0,0,1,19,25,27,26,26,0,0,0,0,6,23,29,30,28,29,18,0,0,0,0,1,14,23,29,30,29,0,0,0,0,4,14,25,28,26,23,14,0,0,0,0,1,15,21,25,27,31,0,0,0,0,6,8,15,19,21,15,9,0,0,0,0,12,20,25,24,26,25,0,0,0,0,4,6,8,13,14,10,0,0,0,0,0,13,23,28,27,26,22,0,0,0,0,1,0,3,11,12,6,1,0,0,0,6,14,22,28,30,28,26,0,0,4,0,0,0,1,8,8,2,0,0,0,0,5,14,20,26,29,25,22,0,0,8,4,0,0,0,0,7,2,0,0,0,0,4,10,16,24,26,24,20,0,0,0,3,0,0,0,0,0,0,0,0,0,0,2,4,11,15,22,20,18,0,0,0,0,0,0,0,0,0,0,0,0,3,6,7,6,6,8,17,18,16,0,0,0,0,0,0,0,0,0,0,0,3,10,11,15,13,10,12,14,13,11,0,0,0,0,0,0,0,0,0,0,0,0,12,20,21,20,16,15,14,15,12,1,0,0,0,0,0,0,0,0,0,0,0,9,22,24,22,20,20,17,18,16,11,12,1,1,0,0,0,0,0,0,0,0,6,17,22,23,21,18,21,21,20,12,14,2,1,0,0,0,0,0,0,0,0,4,17,22,22,21,19,21,21,20],
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
