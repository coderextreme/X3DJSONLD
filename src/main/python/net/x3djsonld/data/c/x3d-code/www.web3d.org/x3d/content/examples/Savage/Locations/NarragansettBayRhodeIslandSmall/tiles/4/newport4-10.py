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
    GeoLOD(center=(41.5107262310976,-71.26537558237226,0.0),range=2150.0764,child1Url=['../../tiles/5/newport8-20.x3d'],child2Url=['../../tiles/5/newport8-21.x3d'],child3Url=['../../tiles/5/newport9-20.x3d'],child4Url=['../../tiles/5/newport9-21.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport4-10.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=23,zSpacing=7.337143E-4,height=[41,40,40,35,34,31,29,26,24,23,23,22,23,25,30,35,37,38,40,37,36,37,36,35,43,42,39,39,33,32,29,28,25,23,24,25,24,27,32,36,38,41,44,45,40,36,35,34,43,41,38,37,36,33,31,30,27,25,26,28,28,30,31,36,43,45,49,47,41,40,34,33,45,42,38,40,38,33,31,31,29,30,28,29,27,31,35,38,41,46,48,51,51,47,39,38,45,43,41,41,40,35,33,32,30,31,30,30,32,35,37,39,44,47,48,50,52,48,47,46,46,46,45,42,38,38,34,33,32,32,32,35,34,34,40,42,43,46,50,54,53,52,49,48,45,45,44,42,40,38,37,32,32,32,36,36,36,37,43,46,45,48,50,55,54,54,50,49,49,45,46,44,42,38,34,34,34,33,36,37,39,39,39,44,47,51,51,52,53,52,54,53,54,54,45,40,41,42,37,35,34,33,35,35,38,39,41,43,48,50,50,53,54,55,53,52,49,49,48,45,46,45,41,33,32,32,31,34,37,41,40,42,48,49,53,53,53,55,53,52,51,49,48,46,40,38,37,34,33,34,38,36,38,41,42,47,45,51,54,54,54,53,53,52,48,49,49,46,41,39,38,38,35,35,36,37,37,40,43,46,48,49,52,54,53,55,52,51,51,51,49,46,41,41,39,35,33,34,36,39,41,43,41,44,47,49,54,53,57,56,53,53,54,51,49,45,41,40,37,36,35,36,37,39,40,42,44,48,49,52,54,54,55,53,54,54,57,51,47,48,44,38,34,36,38,36,37,38,41,40,44,48,49,53,53,54,56,58,56,56,56,54,49,47,47,43,37,35,38,37,36,37,40,43,45,47,49,52,55,55,59,59,60,60,56,52,51,49,45,45,39,37,39,37,39,44,41,43,42,45,51,49,57,57,57,61,59,59,55,53,53,50,48,44,42,39,39,34,35,38,43,46,48,49,57,56,59,60,59,60,61,62,54,56,52,49,47,43,46,45,40,43,41,39,40,44,46,51,55,57,58,61,60,60,61,60,61,57,56,50,46,44,44,44,41,44,44,42,45,46,50,50,54,57,58,62,57,58,63,64,62,58,54,53,50,48,47,44,44,43,40,40,44,51,52,55,54,56,60,62,61,62,64,64,59,58,54,54,50,51,50,50,45,41,43,45,44,48,51,53,54,56,60,62,64,62,63,62,60,58,55,54,50,50,49,50,45,42,44,45,45,47,51,52,54,56,59,62,64,63,62,62],
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
