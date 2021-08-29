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
    meta(content='dardanel3-2.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/4/dardanel3-2.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/4/dardanel3-2.jpg'])),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.535646763531965,26.49987728550963,0.0),geoSystem=["GD"],height=[0,2,1,-3,0,4,5,4,-1,21,19,46,38,94,60,34,4,4,1,2,1,0,1,0,1,0,1,0,3,2,3,1,6,15,42,66,139,134,56,6,0,4,2,1,0,0,0,1,0,3,2,3,1,2,5,1,5,32,85,252,84,27,34,25,13,17,1,0,2,1,1,0,4,3,3,0,2,2,3,1,16,110,131,56,79,165,95,74,1,0,2,0,1,1,0,2,1,0,2,1,5,1,1,8,49,89,101,161,212,223,38,97,100,2,0,0,1,2,5,0,16,3,0,1,2,4,5,50,178,146,286,296,3,24,101,117,20,0,0,0,0,0,4,3,3,3,6,3,6,8,18,100,160,218,10,38,51,127,212,89,70,99,27,68,31,5,-2,4,10,12,11,20,13,32,94,94,57,24,56,146,182,240,225,252,175,256,144,49,23,26,30,41,35,47,61,58,40,75,66,59,116,219,148,224,291,277,242,280,345,181,85,70,64,92,90,68,105,102,83,97,178,111,123,107,114,179,209,315,244,140,200,328,302,178,182,142,128,132,137,160,159,146,246,161,106,102,70,80,103,150,169,108,170,201,290,424,386,348,251,240,202,214,206,245,182,85,59,117,101,138,122,158,92,88,159,197,294,355,294,332,551,445,448,353,311,309,31,18,19,28,25,29,82,80,48,65,89,122,126,193,153,334,518,562,495,406,337,286,11,12,27,36,34,39,42,38,43,51,48,53,134,105,142,269,331,405,314,305,202,193,24,29,15,34,37,52,73,75,81,78,88,161,83,99,162,170,243,283,235,258,229,198,41,36,17,18,37,70,102,173,171,268,204,176,186,109,160,239,161,177,205,152,111,108,59,34,37,23,28,70,205,203,260,253,277,209,105,76,75,104,102,140,143,122,113,121,74,55,61,53,30,52,122,126,163,187,299,192,196,131,124,95,105,126,154,142,126,132,59,89,61,57,36,32,55,76,102,169,269,259,226,232,133,128,125,129,178,211,189,166,91,74,112,95,63,53,42,57,149,163,207,229,227,154,265,163,234,206,192,132,166,183,92,74,114,97,64,53,42,58,145,168,208,229,229,155,264,164,238,208,193,129,170,180],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.017581536,
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

print ("python x3d.py load successful for dardanel3-2.py")
