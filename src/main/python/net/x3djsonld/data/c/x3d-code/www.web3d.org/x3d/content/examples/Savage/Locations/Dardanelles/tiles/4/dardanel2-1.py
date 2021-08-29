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
    meta(content='dardanel2-1.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/4/dardanel2-1.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/4/dardanel2-1.jpg'])),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.16643453115464,26.016671915304816,0.0),geoSystem=["GD"],height=[0,1,2,3,0,5,3,5,3,2,70,67,191,193,191,32,3,45,28,88,70,77,2,2,0,2,1,1,5,4,1,4,7,44,65,84,28,7,4,19,81,28,38,43,1,2,3,2,1,0,2,3,2,0,3,32,27,44,95,5,4,9,2,7,24,25,1,0,0,0,2,1,2,1,3,2,3,17,56,72,20,55,3,4,3,2,2,4,3,1,2,2,1,1,1,2,1,3,2,42,116,94,82,51,113,74,0,2,3,3,2,1,1,2,0,1,0,1,2,0,1,3,214,167,76,119,42,22,116,10,3,2,2,3,1,1,1,2,1,1,1,0,1,13,99,154,114,67,26,47,188,131,2,1,1,1,0,0,2,0,1,2,0,0,3,16,44,58,120,162,38,90,174,112,164,106,1,1,0,0,2,1,0,1,0,2,3,6,70,118,161,64,85,202,200,112,167,173,1,3,1,0,0,1,1,1,2,62,39,13,51,270,51,46,57,151,265,180,173,178,0,2,2,1,2,0,0,0,0,2,5,131,144,111,40,39,48,68,149,132,223,174,1,0,0,0,0,0,0,0,2,2,2,0,80,54,89,74,70,65,245,254,115,95,0,1,0,0,0,0,1,1,1,1,2,1,3,2,134,128,98,122,113,241,63,96,1,0,0,0,0,0,0,0,0,0,1,2,2,2,2,0,224,192,183,105,208,223,2,1,0,0,1,1,0,0,0,1,0,0,0,0,0,0,1,141,312,199,156,122,0,0,0,0,0,1,1,1,1,2,1,1,0,1,2,2,1,2,208,303,267,247,0,-1,0,1,2,1,0,0,0,1,0,0,0,0,0,0,2,1,1,1,5,21,0,0,0,1,2,1,0,1,1,1,0,0,0,0,0,1,2,0,1,1,0,2,1,0,0,0,0,0,1,0,0,2,0,0,0,1,0,1,0,1,0,2,1,0,0,0,0,0,0,0,2,1,1,0,0,1,0,0,2,0,1,2,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,3,0,1,0,1,1,0,0,2,1,0,0,0,0,0,0,0,0,0,0,1,0,2,1,2,0,1,2,0,1,2,0],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.017581536,
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

print ("python x3d.py load successful for dardanel2-1.py")
