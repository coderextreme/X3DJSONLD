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
    meta(content='MH53EEngine.x3d',name='title'),
    meta(content='MH-53E Sea Dragon T64-GE-416 engine outline constructed by extrusion.',name='description'),
    meta(content='LT Terry D. Norbraten, USN',name='creator'),
    meta(content='23 March 2004',name='created'),
    meta(content='24 March 2012',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/h-53.htm',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/mh-53e-wasp-dr5.jpg http://images.google.com/imgres?imgurl=gra.midco.net/mlgould/Helicopters/MH-53E%2520Sea%2520Dragon.jpg&imgrefurl=http://gra.midco.net/mlgould/M-R.html&h=226&w=332&sz=32&tbnid=ICDN8Yoa8mAJ:&tbnh=78&tbnw=114&prev=/images%3Fq%3DMH-53E%26hl%3Den%26lr%3D%26ie%3DUTF-8%26oe%3DUTF-8%26c2coff%3D1 http://www.history.navy.mil/planes/mh-53e.jpg http://digilander.libero.it/31ATSG/MH-53E%20163057-41.jpg http://www.ndu.edu/nwc/nwcCLIPART/US_NAVY/Equipment/Helicopters/MH-53E(Sea-Dragon)/MH53ESeaDragon01.jpg',name='Image'),
    meta(content='MH-53E Sea Dragon T64-GE-416 turboshaft engine outline.',name='subject'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/MH53ESeaDragonUnitedStates/MH53EEngine.x3d',name='identifier'),
    meta(content='X3D-Edit, http://www.web3d.org/x3d/translation/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(DEF='EngineNacelle',
      appearance=Appearance(
        material=Material(diffuseColor=(.208,.388,.463),emissiveColor=(.0471,.0863,0))),
      geometry=Extrusion(creaseAngle=1.05,crossSection=[(0,-.2),(-.191342,-.16194),(-.353553,-.053553),(-.46194,.108658),(-.5,.3),(-.46194,.491342),(-.353553,.653553),(-.191342,.76194),(0,.8),(.191342,.76194),(.353553,.653553),(.46194,.491342),(.5,.3),(.46194,.108658),(.353553,-.053553),(.191342,-.16194),(0,-.2)],endCap=False,scale=[(.7,.7),(.707,.707),(.7,.7),(.6809,.6809),(.6143,.6143),(.6,.6),(.595,.595),(.589,.589),(.5798,.5798),(.5583,.5583),(.5435,.5435),(.5285,.5285),(.5081,.5081),(.5,.5)],solid=False,spine=[(.1,1.25,1.15),(.1,1.16348,.336915),(.1,1.15,.05),(.1,1.16587,-.19166),(.1,1.24417,-.72152),(.1,1.24721,-.85279),(.1,1.24021,-.867751),(.1,1.23408,-.879653),(.1,1.22614,-.892959),(.1,1.20518,-.922078),(.1,1.18412,-.950637),(.1,1.15328,-.994224),(.1,1.08783,-1.09169),(.1,1.05,-1.15)]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MH53EEngine.py")
