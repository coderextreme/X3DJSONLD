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
    meta(content='CG47Prototype.x3d',name='title'),
    meta(content='Prototype for a Ticonderoga Class cruiser',name='description'),
    meta(content='Patrick Sullivan',name='creator'),
    meta(content='30 July 2006',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/CruiserUnitedStates/CG47Prototype.x3d',name='identifier'),
    meta(content='Prototypes, FFG7, Oliver Perry Frigate',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='HullNumber',url=["../../../Savage/ModelDetailing/HullNumbers/HullNumberPrototype.x3d#HullNumber","https://savage.nps.edu/Savage/ModelDetailing/HullNumbers/HullNumberPrototype.x3d#HullNumber"],
      field=[
      field(accessType='inputOutput',appinfo='[0-9] (-1 will prevent rendering)',name='FirstNumber',type='SFInt32'),
      field(accessType='inputOutput',appinfo='[0-9] (-1 will prevent rendering)',name='SecondNumber',type='SFInt32')]),
    ProtoDeclare(appinfo='Prototype of a US Cruiser',name='CG',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='URL for the ISIC seal that is found on the side of most navy ships (e.g. "../../ShipCrests/COMDESRON31/DESRON31.x3d")',name='ISIC',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo="The first (or only) digit of the ship's hull number [0-9]. Note -1 for no number",name='HullNumber1',type='SFInt32',value=-1),
        field(accessType='inputOutput',appinfo="The second digit of the ship's hull number [0-9]. Note: -1 for no number",name='HullNumber2',type='SFInt32',value=-1),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='StarboardBowWeapon',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='PortBowWeapon',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='StarboardFlightDeckWeapon',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='PortFlightDeckWeapon',type='MFString',value=["none"]),
        field(accessType='inputOutput',appinfo='URL for the model that represents the weapon at this location. [example "http://www.web3d.org/content/examples/Savage/Weapons/50Cal.x3d")',name='SternFlightDeckWeapon',type='MFString',value=["none"])]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          #  Ship Model 
          children=[
          Transform(DEF='CGShipModel',
            children=[
            Inline(url=["../../../Savage/ShipsMilitary/CruiserUnitedStates/CG47.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CruiserUnitedStates/CG47.x3d"])]),
          #  Hull Numbers 
          Transform(DEF='StarboardBowHullNumber',rotation=(.721,.678,-.141,.523),translation=(74.514,5.007,2.192),
            children=[
            ProtoInstance(DEF='ShipNumber',name='HullNumber',
              IS=IS(
                connect=[
                connect(nodeField='FirstNumber',protoField='HullNumber1'),
                connect(nodeField='SecondNumber',protoField='HullNumber2')]))]),
          Transform(DEF='PortBowHullNumber',rotation=(.025,.99,-.139,2.794),translation=(74.514,5.007,-2.197),
            children=[
            ProtoInstance(name='HullNumber',
              IS=IS(
                connect=[
                connect(nodeField='FirstNumber',protoField='HullNumber1'),
                connect(nodeField='SecondNumber',protoField='HullNumber2')]))]),
          #  ISIC Seals 
          Transform(DEF='StarboardSeal',translation=(19.032,9.298,5.717),
            children=[
            Transform(
              children=[
              Inline(DEF='ISICSeal',
                IS=IS(
                  connect=[
                  connect(nodeField='url',protoField='ISIC')]))])]),
          Transform(DEF='PortSeal',rotation=(0,1,0,3.14),translation=(19.032,9.298,-5.546),
            children=[
            Transform(
              children=[
              Inline(USE='ISICSeal')])]),
          #  Weapon Placements 
          Transform(DEF='StarboardBowWeapon',rotation=(0,1,0,3.14),translation=(32.363,6.138,7.115),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='StarboardBowWeapon')]))]),
          Transform(DEF='PortBowWeapon',translation=(32.363,6.138,-6.694),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='PortBowWeapon')]))]),
          Transform(DEF='StarboardFlightDeckWeapon',rotation=(0,1,0,3.14),translation=(-66.615,3.709,5.961),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='StarboardFlightDeckWeapon')]))]),
          Transform(DEF='PortFlightDeckWeapon',translation=(-66.615,3.709,-5.631),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='PortFlightDeckWeapon')]))]),
          Transform(DEF='SternFlightDeckWeapon',rotation=(0,1,0,1.57),translation=(-86.633,4.148,4.785),
            children=[
            Inline(
              IS=IS(
                connect=[
                connect(nodeField='url',protoField='SternFlightDeckWeapon')]))])])]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CG47Prototype.py")
