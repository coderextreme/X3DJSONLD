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
    GeoViewpoint(description='GeoViewpoint_2_20',geoSystem=['GDC'],position=(2.3619186420774487,94.8330000960161,448023.77127998613),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.3619186420774487,94.8330000960161,0.0),range=537628.5,child1Url=['../../tiles/3/Malacca4-0.x3d'],child2Url=['../../tiles/3/Malacca4-1.x3d'],child3Url=['../../tiles/3/Malacca5-0.x3d'],child4Url=['../../tiles/3/Malacca5-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca2-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.34716854638195915,92.8115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.20215002,zDimension=22,zSpacing=0.19188096,height=[-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,0,4,0,3,4,7,4,56,8,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,3,2,0,3,0,1,7,0,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,-1,1,3,2,0,196,3,-1,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,2,0,2,38,47,0,0,1,0,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,1,1,2,32,1,0,4,3,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,0,2,0,2,1,41,2,2,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,5,0,0,1,2,0,2,1,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,0,5,0,0,2,2,2,2,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,0,1,0,2,1,2,4,2,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,0,0,0,0,0,3,12,26,455,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,0,0,1,0,0,20,60,385,1666,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,0,1,1,2,20,36,131,1085,2431,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,0,1,0,1,20,36,161,1170,2413],
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
