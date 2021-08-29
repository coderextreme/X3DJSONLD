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
    GeoViewpoint(description='GeoViewpoint_2_30',geoSystem=['GDC'],position=(6.391418833468428,94.8330000960161,448023.77127998613),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])),
    GeoLOD(center=(6.391418833468428,94.8330000960161,0.0),range=537628.5,child1Url=['../../tiles/3/Malacca6-0.x3d'],child2Url=['../../tiles/3/Malacca6-1.x3d'],child3Url=['../../tiles/3/Malacca7-0.x3d'],child4Url=['../../tiles/3/Malacca7-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/Malacca3-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.376668737772939,92.8115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=21,xSpacing=0.20215002,zDimension=22,zSpacing=0.19188096,height=[-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,0,1,0,1,20,36,161,1170,2413,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,0,0,2,17,53,93,455,1303,1250,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-1,1,6,91,658,449,723,1079,1187,1303,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,2,11,413,542,532,1367,1799,626,1387,-99,-99,-99,-99,-99,-99,1,1,1,1,-2,2,5,162,1722,1200,758,1092,405,188,81,-99,-99,-99,-99,-99,-99,2,2,3,2,1,0,13,294,102,193,4,2,4,1,2,-99,-99,-99,-99,-99,-99,3,0,0,2,3,1,11,25,463,14,0,1,0,3,3,-99,-99,-99,-99,-99,-99,2,1,0,1,2,3,2,2,1,1,1,1,2,1,1,-99,-99,-99,-99,-99,-99,1,1,1,2,2,2,38,1,1,0,2,0,2,0,0,-99,2,3,3,0,1,-99,-99,-99,-99,-99,2,2,1,1,1,-99,-99,-99,-99,-99,-99,4,6,1,3,0,-99,-99,-99,-99,-99,1,1,1,1,2,-99,-99,-99,-99,-99,-99,3,5,4,3,3,-99,-99,-99,-99,-99,1,3,4,2,0,-99,-99,-99,-99,-99,-99,4,3,2,1,1,-99,-99,-99,-99,-99,2,2,4,3,3,-99,-99,-99,-99,-99,-99,5,3,2,2,84,-99,-99,-99,-99,-99,2,3,1,4,2,-99,-99,-99,-99,-99,-99,4,3,5,4,120,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,5,2,5,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,1,3,2,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,2,1,0,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,4,2,3,2,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,0,0,1,2,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,2,2,2,3,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,3,2,2,2,2,3,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99],
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
