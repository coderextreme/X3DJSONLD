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
    component(level=1,name='Geospatial'),
    meta(content='dardanel3-1.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/4/dardanel3-1.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/4/dardanel3-1.jpg'])),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.535646763531965,26.016671915304816,0.0),geoSystem=["GD"],height=[0,0,0,0,0,0,0,0,0,0,1,0,2,1,2,0,1,2,0,1,2,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,1,2,1,2,0,1,1,1,0,1,1,1,2,0,1,1,2,0,2,0,0,1,1,1,1,3,0,0,0,0,0,1,0,0,1,0,2,2,2,2,1,3,1,3,2,1,2,0,0,0,1,1,0,0,0,-1,3,36,3,1,0,2,2,65,94,3,1,2,1,0,2,0,1,1,1,0,31,52,50,20,31,50,31,28,2,11,91,79,117,42,25,8,3,32,38,1,0,1,30,42,66,15,45,24,25,25,23,25,42,78,102,136,16,69,13,4,3,0,0,2,30,24,59,54,37,55,73,64,50,35,45,66,116,134,36,65,93,11,10,0,2,2,13,33,37,40,34,67,61,52,41,91,75,101,94,105,91,72,155,51,57,1,2,9,17,36,37,52,106,59,159,85,58,93,76,124,93,64,37,95,169,75,66,1,1,2,2,21,44,108,199,129,157,204,189,39,37,119,65,72,21,61,166,188,178,2,1,1,16,25,67,255,342,230,151,199,186,27,5,30,11,9,22,30,76,160,246,1,1,1,2,2,27,64,136,140,283,272,211,2,4,3,3,3,3,16,35,120,182,0,0,1,1,2,3,3,0,42,158,42,159,3,16,29,16,18,15,5,7,33,31,0,2,0,1,2,2,3,3,3,2,4,8,2,6,39,14,8,22,29,27,10,11,1,0,0,3,3,3,3,3,4,2,3,3,2,3,12,8,10,27,47,22,35,24,0,2,0,0,3,2,4,4,3,4,3,5,4,10,4,26,26,31,48,41,38,41,3,1,1,0,2,2,2,3,6,2,4,5,13,6,25,21,51,55,54,36,68,59,8,19,8,43,9,9,3,3,4,4,4,5,9,19,11,20,50,74,68,61,66,74,21,27,147,76,24,47,32,4,4,5,6,6,6,12,33,50,57,56,92,96,60,59,89,103,119,98,59,57,38,9,6,7,8,6,6,6,6,55,57,54,76,81,86,91,86,106,116,101,60,57,40,9,6,6,8,7,6,6,6,54,58,52,68,86,90,92],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.017581536,
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for dardanel3-1.py")
