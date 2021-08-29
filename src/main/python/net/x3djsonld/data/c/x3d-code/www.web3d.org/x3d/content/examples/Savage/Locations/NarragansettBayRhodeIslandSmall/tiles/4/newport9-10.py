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
    GeoLOD(center=(41.59143480887271,-71.26537558237226,0.0),range=2150.0764,child1Url=['../../tiles/5/newport18-20.x3d'],child2Url=['../../tiles/5/newport18-21.x3d'],child3Url=['../../tiles/5/newport19-20.x3d'],child4Url=['../../tiles/5/newport19-21.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-10.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5833639510952,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[52,51,50,49,49,51,54,57,59,61,64,66,67,71,74,76,79,86,87,88,89,90,89,88,51,48,46,43,48,50,53,56,57,62,64,64,69,69,70,75,81,83,86,85,87,91,88,88,46,42,41,44,50,51,52,54,54,61,63,64,64,65,68,71,76,78,78,83,87,88,89,89,43,44,40,40,43,50,54,54,54,59,64,65,65,64,67,71,75,79,81,82,86,84,87,88,46,41,40,40,40,47,52,54,56,59,62,66,64,66,69,72,74,77,78,80,83,89,90,90,49,47,41,40,40,42,47,55,58,60,60,64,63,68,70,72,75,78,78,80,81,82,82,82,50,47,43,42,43,46,49,54,59,57,62,65,68,67,70,73,72,74,76,80,80,77,78,78,51,48,46,45,45,45,46,53,62,62,65,63,63,66,68,74,71,70,74,76,79,80,78,77,55,52,50,44,43,43,45,48,56,64,65,65,66,65,66,69,72,75,75,76,75,74,70,69,50,46,45,45,41,40,46,49,56,61,66,71,74,65,56,56,64,66,71,74,72,73,69,69,48,47,47,49,44,46,46,49,55,59,61,69,70,71,62,58,58,61,66,70,71,70,67,68,42,40,44,45,43,46,46,48,54,57,60,60,66,70,68,66,65,65,65,63,62,58,61,61,39,37,38,38,38,42,45,48,51,56,61,61,69,73,68,62,56,58,61,57,53,59,61,61,33,36,33,35,36,37,41,45,46,51,56,63,65,67,71,64,64,59,63,59,61,60,59,59,34,34,33,34,37,39,44,48,49,49,51,55,56,60,67,66,67,72,65,58,60,60,58,58,31,31,31,31,35,37,41,43,44,52,56,53,55,59,62,62,62,67,61,60,61,57,60,62,26,29,30,33,37,39,42,44,49,51,50,51,51,53,60,63,64,64,62,59,58,57,57,58,25,26,30,30,36,40,46,48,48,48,48,50,50,50,56,63,68,62,62,61,60,60,58,57,22,26,30,32,40,41,44,47,47,46,47,52,48,50,55,60,63,59,60,62,63,62,60,61,23,25,29,34,40,44,43,44,46,45,48,47,50,51,53,59,60,63,63,61,64,64,61,60,22,25,31,35,37,40,42,44,46,47,49,47,49,50,53,58,65,67,63,62,61,62,60,60,19,25,29,33,37,41,44,46,45,46,47,49,50,50,53,55,63,65,66,67,59,59,60,59,22,29,27,33,35,42,45,46,48,48,50,49,52,56,55,56,57,66,65,59,58,53,55,54,22,28,27,33,35,40,45,46,47,48,51,50,54,59,55,59,57,62,64,57,55,52,53,52],
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
