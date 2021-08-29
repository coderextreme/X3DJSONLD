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
    GeoLOD(center=(41.68828510220285,-71.26537558237226,0.0),range=2150.0764,child1Url=['../../tiles/5/newport30-20.x3d'],child2Url=['../../tiles/5/newport30-21.x3d'],child3Url=['../../tiles/5/newport31-20.x3d'],child4Url=['../../tiles/5/newport31-21.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport15-10.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.680214244425336,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=23,zSpacing=7.337143E-4,height=[6,12,13,16,16,17,19,23,24,25,24,27,30,29,28,28,31,34,33,35,39,41,40,41,6,7,10,14,15,18,19,22,23,24,28,28,32,29,29,32,34,34,34,38,38,43,44,44,4,4,5,9,11,13,17,21,23,24,29,32,31,32,34,35,36,40,40,40,41,43,48,50,1,1,4,5,9,15,17,19,26,29,30,33,36,39,40,40,42,39,44,45,46,46,48,49,2,1,3,5,9,13,15,16,26,31,36,37,42,43,43,43,44,48,47,48,50,51,49,47,2,2,2,5,8,12,17,20,28,32,37,39,41,43,47,49,51,52,54,53,51,53,52,50,1,0,1,2,6,10,19,22,30,35,38,41,40,45,47,51,54,54,54,54,53,56,57,55,2,1,2,4,8,11,18,24,28,34,38,40,44,48,48,51,53,54,56,55,54,52,54,54,2,3,1,4,9,12,17,22,27,32,37,39,45,47,49,51,48,49,52,54,55,54,55,54,1,0,0,2,8,12,16,21,27,32,37,38,43,44,45,44,44,47,51,53,52,54,54,53,1,2,2,4,7,10,17,22,25,31,36,39,39,38,40,39,41,43,49,48,51,51,51,51,1,4,5,5,5,10,16,21,24,29,32,33,32,35,35,37,43,43,45,46,47,47,48,49,4,4,4,6,8,15,19,21,23,28,30,34,33,32,35,37,37,39,43,45,47,47,46,46,6,8,6,9,9,14,18,22,24,26,30,32,30,32,34,36,36,38,41,41,42,44,46,46,10,10,12,13,12,14,17,23,25,24,25,29,29,28,30,34,38,38,39,40,43,45,44,44,8,11,11,13,15,15,18,19,23,24,23,27,29,27,29,33,37,39,37,40,41,42,44,45,11,12,13,14,16,20,17,20,20,21,22,22,23,26,28,31,35,39,39,41,43,43,46,47,12,12,15,15,18,18,18,20,20,19,18,20,23,25,26,30,33,38,39,43,45,46,47,47,16,15,16,15,17,17,20,21,19,20,21,18,20,25,25,29,32,37,40,45,48,47,46,45,17,17,19,17,17,20,18,17,21,20,17,20,22,25,26,30,32,34,40,45,48,48,48,48,17,18,21,24,23,21,20,22,25,21,19,22,22,19,23,27,32,34,39,43,47,50,51,50,22,22,26,26,24,24,22,22,21,23,24,20,21,22,22,26,31,33,39,44,45,48,48,48,22,23,26,26,24,24,23,21,20,23,26,21,21,22,24,25,30,33,39,44,45,48,48,48],
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
