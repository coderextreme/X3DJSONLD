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
    GeoLOD(center=(41.55915137776267,-71.37836759125742,0.0),range=2150.0764,child1Url=['../../tiles/5/newport14-6.x3d'],child2Url=['../../tiles/5/newport14-7.x3d'],child3Url=['../../tiles/5/newport15-6.x3d'],child4Url=['../../tiles/5/newport15-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport7-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.38643844903493,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[0,0,11,10,14,16,18,19,19,17,18,20,21,20,20,21,21,22,23,23,24,26,26,25,0,0,9,11,14,14,17,17,17,16,18,20,20,19,18,18,21,22,23,23,24,25,24,23,0,0,4,6,13,15,14,15,15,18,18,19,20,20,19,17,20,21,21,23,25,23,24,25,0,0,4,8,9,12,12,13,15,18,19,19,20,20,19,21,21,21,20,22,23,23,25,25,0,0,6,7,10,10,12,15,19,17,17,16,20,19,18,18,20,21,19,22,23,23,24,24,0,0,4,5,7,13,14,15,14,19,17,18,18,18,17,18,19,18,19,21,23,25,24,24,0,1,8,6,8,11,14,13,15,16,16,17,18,15,17,16,17,19,20,22,22,24,25,25,0,0,7,11,8,8,10,12,14,11,12,13,14,18,18,18,14,18,22,21,23,22,26,26,0,0,6,8,8,11,12,11,13,13,12,14,14,14,16,15,16,18,23,22,24,23,25,25,0,0,1,10,7,8,8,10,8,11,15,15,13,13,17,17,19,20,22,20,21,22,25,25,0,0,0,3,6,8,9,10,12,11,11,13,16,17,15,15,18,19,22,21,22,23,26,27,0,0,0,2,5,5,7,9,11,11,10,14,14,16,18,20,19,21,21,22,22,24,27,27,0,0,0,0,2,6,5,6,11,9,11,13,15,18,19,18,19,18,16,20,21,23,28,28,0,0,0,2,3,3,4,6,9,12,15,13,16,17,17,20,20,17,18,19,23,24,22,23,0,0,0,0,0,0,1,4,9,14,16,16,17,20,20,19,19,18,19,21,23,25,24,23,0,0,0,0,0,0,0,0,9,17,17,19,20,21,21,21,20,20,21,23,24,26,26,26,0,0,0,0,0,0,0,0,10,17,22,22,22,22,22,22,22,23,24,25,27,26,27,28,0,0,0,0,0,0,0,0,12,17,20,21,21,23,24,24,23,25,25,27,30,29,28,28,0,0,0,0,0,0,0,0,12,15,18,23,23,23,26,27,25,26,26,28,30,30,28,29,0,0,0,0,0,0,0,0,9,14,19,23,23,22,23,27,27,25,25,27,31,32,29,29,0,0,0,0,0,0,0,0,6,12,18,21,24,24,22,24,23,26,27,29,31,30,28,27,0,0,0,0,0,0,0,0,0,8,13,20,23,24,24,23,24,27,28,30,30,29,28,28,0,0,0,0,0,0,0,0,0,0,12,15,21,23,21,22,25,27,30,30,30,28,27,26,0,0,0,0,0,0,0,0,0,0,11,15,21,22,21,22,25,27,30,32,29,27,26,26],
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
