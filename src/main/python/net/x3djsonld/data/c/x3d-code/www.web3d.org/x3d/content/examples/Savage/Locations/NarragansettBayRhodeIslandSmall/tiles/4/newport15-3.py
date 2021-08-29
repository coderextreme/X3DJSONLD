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
    GeoLOD(center=(41.68828510220285,-71.37836759125742,0.0),range=2150.0764,child1Url=['../../tiles/5/newport30-6.x3d'],child2Url=['../../tiles/5/newport30-7.x3d'],child3Url=['../../tiles/5/newport31-6.x3d'],child4Url=['../../tiles/5/newport31-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.680214244425336,-71.38643844903493,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=23,zSpacing=7.337143E-4,height=[25,25,25,28,28,30,32,32,32,31,30,29,25,24,22,21,17,12,8,7,4,3,2,2,24,27,26,27,28,31,34,33,34,31,30,29,26,25,23,22,19,14,9,7,5,3,2,2,22,24,24,27,28,31,34,33,33,32,31,26,25,25,24,23,20,15,11,6,5,3,2,2,22,22,26,26,29,30,33,34,35,32,31,28,25,24,26,25,20,17,13,6,4,3,2,2,24,22,24,24,22,26,29,32,33,33,32,31,29,26,26,26,22,18,12,5,4,3,2,2,24,22,21,22,22,24,28,32,32,35,34,33,32,29,25,23,21,15,11,4,3,3,2,2,20,21,20,21,24,25,28,32,34,36,36,37,37,34,27,21,17,13,6,3,3,3,2,2,17,19,20,21,22,24,27,30,34,38,40,39,37,36,32,23,17,11,6,3,3,2,2,2,16,18,19,20,25,27,29,32,36,38,39,38,37,36,34,28,20,12,9,4,3,3,2,2,15,17,17,21,25,28,30,32,37,40,41,40,38,38,34,29,22,16,11,10,3,3,2,1,11,15,19,24,25,27,32,36,41,44,44,42,41,38,35,31,26,19,16,14,5,3,2,1,10,15,18,20,23,26,31,37,42,44,45,44,43,40,36,31,30,26,25,18,7,3,2,2,8,13,17,19,20,25,30,36,41,43,47,47,44,40,37,37,35,31,28,23,14,3,2,2,7,13,17,17,21,25,31,35,42,43,45,47,44,41,38,39,36,33,30,25,16,7,2,2,9,15,17,18,19,24,30,37,42,44,45,45,43,40,38,36,35,34,30,23,16,7,2,2,10,13,18,17,18,23,32,38,41,44,47,46,43,39,35,33,31,30,27,20,13,8,6,5,10,15,17,17,19,24,31,35,40,45,46,45,41,37,33,30,28,27,22,15,11,8,4,3,13,16,17,17,19,25,31,37,41,44,45,43,40,35,32,27,24,21,19,16,12,8,7,6,14,19,18,18,20,25,33,40,42,44,44,41,37,33,29,24,21,18,14,13,12,11,9,9,14,18,19,19,21,26,33,39,42,43,41,38,35,31,27,23,21,19,19,16,13,13,12,11,13,15,15,19,21,24,32,38,41,41,40,37,34,30,26,23,21,20,21,18,17,15,13,13,12,13,15,17,20,24,31,36,40,41,39,37,31,29,25,25,25,23,17,19,19,19,15,14,12,13,15,17,19,24,31,36,40,41,39,36,30,28,26,25,25,24,18,20,20,19,15,14],
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
