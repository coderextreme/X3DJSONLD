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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='MH53ESponson.x3d',name='title'),
    meta(content='MH-53E Sea Dragon sponson / fuel cells created by extrusion.',name='description'),
    meta(content='LT Terry D. Norbraten, USN',name='creator'),
    meta(content='23 March 2004',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/h-53.htm',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/mh-53e-wasp-dr5.jpg http://images.google.com/imgres?imgurl=gra.midco.net/mlgould/Helicopters/MH-53E%2520Sea%2520Dragon.jpg&imgrefurl=http://gra.midco.net/mlgould/M-R.html&h=226&w=332&sz=32&tbnid=ICDN8Yoa8mAJ:&tbnh=78&tbnw=114&prev=/images%3Fq%3DMH-53E%26hl%3Den%26lr%3D%26ie%3DUTF-8%26oe%3DUTF-8%26c2coff%3D1 http://www.history.navy.mil/planes/mh-53e.jpg http://digilander.libero.it/31ATSG/MH-53E%20163057-41.jpg http://www.ndu.edu/nwc/nwcCLIPART/US_NAVY/Equipment/Helicopters/MH-53E(Sea-Dragon)/MH53ESeaDragon01.jpg',name='Image'),
    meta(content='MH-53E Sea Dragon sponson / fuel cells',name='subject'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53ESponson.x3d',name='identifier'),
    meta(content='X3D-Edit, http://www.web3d.org/x3d/translation/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.2,0.3,0.4),emissiveColor=(0.05,0.09,0))),
      geometry=Extrusion(creaseAngle=1.05,crossSection=[(-.14995,2.85005),(-.0499501,3.05005),(.0437999,3.11255),(.15005,3.15005),(.35005,3.15005),(.566225,3.10892),(.65005,3.05005),(.95005,2.65005),(1.00902,2.48895),(1.05005,2.15005),(.95005,1.25005),(.65005,.35005),(.138757,-.79377),(.0893349,-.84075),(.0668369,-.85005),(.0500499,-.84995),(.0207169,-.83356),(-.0295981,-.75719),(-.24995,.55005),(-.24995,2.65005),(-.14995,2.85005)],spine=[(.55,.55,0),(-.55,.55,0)]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MH53ESponson.py")
