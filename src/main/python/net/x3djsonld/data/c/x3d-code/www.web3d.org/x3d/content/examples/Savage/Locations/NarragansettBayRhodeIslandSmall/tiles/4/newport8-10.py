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
    GeoLOD(center=(41.57529309331769,-71.26537558237226,0.0),range=2150.0764,child1Url=['../../tiles/5/newport16-20.x3d'],child2Url=['../../tiles/5/newport16-21.x3d'],child3Url=['../../tiles/5/newport17-20.x3d'],child4Url=['../../tiles/5/newport17-21.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-10.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=23,zSpacing=7.337143E-4,height=[38,41,45,48,50,50,52,55,57,62,60,64,68,71,75,79,82,86,87,85,81,85,86,86,38,41,40,41,44,48,51,51,55,58,60,61,66,69,72,78,81,83,87,89,88,85,85,85,32,40,39,38,43,44,46,49,52,52,58,59,63,67,73,77,80,86,86,84,84,84,82,83,32,33,34,38,42,43,45,47,47,50,56,60,61,64,67,72,81,84,82,83,82,82,83,83,32,32,33,40,44,45,45,44,46,48,51,53,60,61,68,70,78,76,80,85,84,85,83,83,32,37,42,42,42,44,43,46,47,47,48,51,54,61,70,71,78,82,81,84,83,81,82,82,46,44,44,43,41,41,43,46,48,48,50,52,53,59,66,69,73,78,80,78,79,81,83,83,43,45,43,46,44,42,47,47,49,51,50,52,54,59,63,70,71,74,77,79,79,82,82,83,51,51,49,49,47,49,50,50,49,48,49,52,54,59,62,66,71,75,79,79,80,81,81,82,54,55,53,53,51,52,52,50,51,50,49,55,59,59,61,66,70,74,76,78,81,81,83,83,59,58,57,58,55,54,56,53,48,50,54,54,58,58,63,69,69,72,78,78,81,81,85,85,57,59,62,60,60,60,59,57,54,54,53,54,58,57,59,64,67,70,70,74,84,86,87,87,62,62,63,64,62,62,60,57,55,56,56,58,57,61,62,61,66,68,74,79,84,89,94,94,60,59,64,64,65,64,62,61,57,57,54,56,56,64,66,65,68,72,78,85,88,90,90,90,60,63,62,65,67,66,64,61,62,60,59,61,61,59,63,65,68,78,81,86,91,94,92,91,60,61,64,64,65,65,65,62,62,61,61,60,63,63,64,69,74,78,81,93,93,94,95,94,56,60,61,64,66,65,64,63,63,66,65,63,67,66,65,71,76,80,83,93,94,95,95,94,57,59,60,63,65,64,62,62,64,65,65,67,72,73,71,73,80,85,90,92,93,92,90,90,54,56,58,61,63,61,61,64,66,65,67,67,72,73,75,74,81,84,88,90,91,92,92,92,54,56,57,59,59,58,60,66,67,66,67,69,69,72,75,78,80,84,89,91,92,93,91,91,53,51,53,54,54,55,58,62,67,67,67,67,69,73,71,79,82,85,87,91,91,91,88,88,51,52,52,50,51,52,55,57,60,62,64,66,66,72,74,78,80,85,87,89,90,90,89,88,52,51,50,49,49,51,54,57,59,61,64,66,67,71,74,76,79,86,87,88,89,90,89,88],
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
