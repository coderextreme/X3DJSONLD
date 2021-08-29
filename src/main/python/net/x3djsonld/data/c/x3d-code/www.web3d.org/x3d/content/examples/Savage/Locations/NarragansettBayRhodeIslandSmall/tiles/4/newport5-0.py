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
    GeoLOD(center=(41.52686794665262,-71.42679273792248,0.0),range=2150.0764,child1Url=['../../tiles/5/newport10-0.x3d'],child2Url=['../../tiles/5/newport10-1.x3d'],child3Url=['../../tiles/5/newport11-0.x3d'],child4Url=['../../tiles/5/newport11-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport5-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.4348635957,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=7.337143E-4,zDimension=24,zSpacing=7.018137E-4,height=[38,38,38,44,44,43,44,46,48,51,50,51,52,56,54,53,54,55,49,45,43,36,33,39,39,39,42,44,45,51,49,50,50,51,53,55,58,57,53,54,54,51,48,43,39,34,37,41,41,41,47,48,50,50,50,51,55,55,57,58,59,54,57,57,53,47,41,37,33,39,43,45,45,47,50,48,50,52,53,55,58,61,62,59,53,57,55,53,50,45,41,36,42,46,48,49,48,50,51,53,53,54,57,60,63,63,62,59,58,56,51,48,45,42,38,46,49,50,50,52,51,53,53,53,57,59,60,60,62,63,65,61,58,54,50,43,39,35,47,47,50,51,51,49,51,53,54,57,58,61,63,64,63,67,65,60,55,50,43,39,33,48,45,48,48,49,52,54,54,56,57,59,63,67,66,63,67,65,62,56,50,44,36,34,45,46,50,51,49,49,51,56,61,57,61,64,66,69,65,63,64,63,58,51,42,35,31,47,48,49,47,53,52,53,54,56,56,60,65,68,67,69,61,61,58,56,50,43,38,33,46,50,48,48,48,49,49,51,57,59,61,62,66,67,65,56,58,56,56,50,43,39,32,47,48,46,46,47,47,48,47,49,55,56,61,67,64,62,59,57,56,51,47,41,34,29,47,45,46,45,46,46,48,47,48,55,57,57,61,64,59,56,53,52,49,45,41,32,28,43,42,41,41,41,42,44,44,51,53,57,59,59,59,59,58,54,49,47,45,38,30,26,38,39,42,42,45,43,43,47,52,56,59,57,58,57,59,56,52,49,46,43,37,34,28,41,41,41,44,43,46,45,47,48,51,56,55,51,56,57,56,51,47,43,40,36,31,25,39,39,41,40,42,40,45,51,52,52,56,53,54,56,55,58,53,45,40,36,35,29,25,37,39,38,38,43,47,48,50,50,53,49,52,55,57,55,52,52,43,39,32,31,24,20,30,35,40,44,45,50,51,53,51,52,47,53,55,52,51,50,48,42,37,35,26,23,14,29,33,37,42,44,47,49,50,52,51,55,53,56,53,53,49,44,35,32,29,22,15,12,27,33,39,42,43,45,48,51,49,52,53,53,52,52,52,45,42,38,32,19,13,10,7,31,34,36,40,41,45,47,46,50,52,54,55,50,48,44,37,33,31,27,21,15,8,1,30,35,37,37,40,43,46,44,43,47,49,50,45,45,42,36,31,30,21,16,10,10,3,31,36,38,37,39,43,46,44,43,45,48,50,44,44,41,38,30,27,19,16,8,9,3],
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
