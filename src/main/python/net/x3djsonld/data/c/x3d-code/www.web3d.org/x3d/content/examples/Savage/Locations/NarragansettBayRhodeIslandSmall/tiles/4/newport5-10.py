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
    GeoLOD(center=(41.52686794665262,-71.26537558237226,0.0),range=2150.0764,child1Url=['../../tiles/5/newport10-20.x3d'],child2Url=['../../tiles/5/newport10-21.x3d'],child3Url=['../../tiles/5/newport11-20.x3d'],child4Url=['../../tiles/5/newport11-21.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport5-10.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[60,58,55,54,50,50,49,50,45,42,44,45,45,47,51,52,54,56,59,62,64,63,62,62,61,57,57,52,53,51,49,49,45,43,43,43,45,51,54,56,57,58,62,61,62,64,63,63,64,61,56,52,52,53,49,44,44,45,44,47,45,50,51,56,61,69,63,62,62,60,57,57,58,61,61,57,53,51,49,47,44,46,49,49,48,49,52,57,60,63,64,66,66,60,58,58,61,62,60,59,56,52,48,47,48,45,48,48,55,54,55,58,61,60,63,62,64,61,59,57,62,64,64,59,58,56,51,48,48,48,52,50,52,52,54,58,60,62,64,67,65,62,57,56,61,66,62,61,61,54,53,50,48,50,49,50,52,54,58,59,61,65,66,69,68,63,60,59,62,65,62,61,57,56,54,51,50,50,49,52,54,54,59,61,64,63,66,65,64,66,66,64,58,61,60,58,54,53,53,53,52,48,51,53,55,56,57,58,62,67,69,67,65,66,63,61,58,57,58,59,58,54,52,52,49,51,53,55,54,54,57,62,64,66,67,65,71,67,64,63,52,49,59,67,60,59,56,55,53,57,50,46,52,57,63,62,64,67,69,67,74,68,64,63,61,60,62,61,56,56,54,52,52,52,53,51,53,57,60,63,65,69,72,68,70,70,66,65,64,61,55,52,54,52,54,53,52,52,52,52,54,59,61,62,64,64,70,72,68,70,70,69,60,59,54,54,54,52,53,54,54,53,52,47,51,56,54,57,63,67,68,75,75,76,74,72,60,61,59,55,53,53,51,51,51,51,53,51,50,53,50,54,65,64,70,78,77,80,79,77,55,58,50,50,55,54,52,52,52,53,52,53,53,53,48,48,59,65,73,76,73,75,72,72,51,53,56,50,54,53,53,51,49,51,54,53,53,55,54,59,68,70,66,64,67,70,67,67,54,58,59,59,56,55,52,50,51,53,56,52,52,54,62,65,58,59,66,68,72,68,65,64,56,57,53,57,59,56,55,54,54,53,55,56,55,54,62,69,64,64,64,68,69,66,64,64,54,55,59,61,59,59,59,58,58,57,56,58,58,58,64,63,63,64,65,63,65,66,64,65,57,56,62,64,64,62,64,63,62,61,59,63,62,60,61,61,62,62,62,65,64,63,65,64,58,61,58,63,62,65,66,64,64,64,64,65,67,64,62,64,59,63,63,62,62,61,61,62,58,55,59,65,67,69,69,69,68,68,69,65,65,67,65,68,65,64,62,62,62,62,63,62,59,54,60,65,68,69,70,70,69,68,68,67,67,69,66,65,64,63,62,63,62,62,63,63],
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
